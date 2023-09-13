def interpolate(n, xs, ys):
    """Return a polynomial that passes through all given points."""
    n = max(n, len(xs), len(ys))
    if len(xs) == 0: xs = [sp.symbols(f'x{i}') for i in range(n)]
    if len(ys) == 0: ys = [sp.symbols(f'y{i}') for i in range(n)]
    vs = [sp.symbols(f'a{i}') for i in range(n)]
    power = list(range(n))

    cons = [
        sum(
            v * (x_ ** k) for v, k in zip(vs, power)
        ) - y
            for x_, y in zip(xs, ys)
    ]

    sol = list(sp.linsolve(cons, vs))[0]

    f = (sum(
        v * (x ** k) for v, k in zip(sol, power)
    ))
    return f

# xs = [-1, 0, 1, 2, 3]
# ys = [-1, 2, 1, 4, 5]
# f = interpolate(0, xs, ys)
# plot(f, list(zip(xs, ys)), True)
# n = 10
# xs = np.arange(-1, 1, 1 / n)
# ys = np.sin(xs * n)
# f = interpolate(0, xs, ys)
# plot(f, list(zip(xs, ys)), draw_points=True, draw_label=True)
# sp.simplify(interpolate(0, xs, ys))
# plt.show()
