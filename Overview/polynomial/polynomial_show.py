import z3
import numpy as np
import sympy as sp
import matplotlib.pyplot as plt

x = sp.symbols('x')

def plot(f, points, draw_label=True, draw_points=True):
    """Plot a sympy symbolic polynomial f."""

    xmin = min([x_ for x_, _ in points], default=-1) - 0.1 # default -1 
    xmax = max([x_ for x_, _ in points], default=1) + 0.1  # default 1

    xs = np.arange(xmin, xmax, (xmax - xmin) / 100) 
    ys = [f.subs(x, x_) for x_ in xs]

    plt.grid(True)
    plt.plot(xs, ys)
    if draw_points:
        plt.scatter(
            [x_ for x_, y_ in points],
            [y_ for x_, y_ in points],
        )
    if draw_label:
        for x_, y_ in points:
            plt.text(x_, y_, f'$({x_},{y_})$', va='bottom', ha='center')
        plt.title(f'$y = {sp.latex(f)}$')
plot(x + 1, [], draw_label=False)
plot(x**2 + 1, [], draw_label=False)
plot(x**3 + 1, [], draw_label=False)
plt.show()


