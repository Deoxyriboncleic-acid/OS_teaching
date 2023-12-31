# Goldstine Technical Manual Chapter 8 Example
# Figure 8-3, Tables 8-11, 8-13
# Start running with a card read
# This example is given only for the first few values
# of N.  They appear succively in Acc 13.  Thus to
# verify all of them, it must be single stepped.
# Based on the values given in the following cards,
# the final step will have P 0 001 761 920 in Acc 20.

# Card contents:
# 220001100044000330001000055000     5100024000          15000          42000     
# 12000210003200031000520004100014000310003400023000540004300053000250003500045000

# Initiating Unit
p 2-3 i.Ri
p 2-7 i.Rl
p i.Ro 1-1

# Master Programmer
p 1-3 p.Ai
p p.A1o 1-4
p p.A2o 2-1
p p.A3o 2-7
p p.A4o 2-2
p p.A5o 2-5
s p.a20 A
s p.d20s1 1
s p.d20s2 1
s p.d20s3 1
s p.d20s4 1
s p.d20s5 1
s p.cA 5

p 1-1 p.Bi
p p.B1o 1-2
p p.B2o 1-3
s p.d19s1 1
s p.d19s2 1
s p.cB 2

p 1-2 p.Ci
p p.C1o 1-3
s p.a18 C
s p.a14 C
s p.d16s1 1
s p.d15s1 0
s p.d14s1 0
s p.d14s2 1
s p.cC 2

p 2-6 p.Di
p p.D1o 7-1
p p.D2o 8-1
p p.D3o 8-3
p p.D4o 8-6
p p.D5o 8-8
p p.D6o 2-2
s p.a12 D
s p.d12s1 1
s p.d12s2 1
s p.d12s3 1
s p.d12s4 1
s p.d12s5 1
s p.d12s6 1
s p.cD 6

p 2-8 p.Edi
p 9-2 p.Ei
p p.E1o 9-3
p p.E2o 9-5
p p.E3o 9-7
p p.E4o 9-9
p p.E5o 9-11
s p.d11s1 1
s p.d11s2 1
s p.d11s3 1
s p.d11s4 1
s p.d11s5 1
s p.cE 5

p 2-4 p.Fdi
p 10-2 p.Fi
p p.F1o 9-11
p p.F2o 9-9
p p.F3o 9-7
p p.F4o 9-5
p p.F5o 9-3
s p.cF 5

p 9-1 p.Gi
p p.G1o 9-2
p p.G2o 9-1
s p.a10 G
s p.a8 G
s p.d8s1 5
s p.d8s2 5
s p.cG 2

p 2-2 p.Hi
p p.H1o 2-6
p p.H2o 1-3
p p.H3o 2-6
p p.H4o 1-3
s p.d5s1 2
s p.d5s2 1
s p.d5s3 8
s p.d5s4 1
s p.cH 4

s p.a4 J
s p.a2 J

p 10-3 p.Ki
p p.K1o 10-4
p p.K2o 10-5
s p.d1s1 1
s p.d1s2 1
s p.cK 2

# Function Table 1
s f1.Ninep Cpp
p 5 f1.arg
p f1.A ad.dp.1.0
p ad.dp.1.11 3-2
p ad.dp.1.6 3-3
p ad.dp.1.5 3-4
p ad.dp.1.4 3-5
p ad.dp.1.3 3-6
p ad.dp.1.2 3-7
p ad.dp.1.1 3-8
p f1.B ad.dp.2.0
p ad.dp.2.6 3-9
p ad.dp.2.5 3-10
p ad.dp.2.4 3-11
p ad.dp.2.3 4-1
p ad.dp.2.2 4-2
p ad.dp.2.1 4-3
p ad.dp.2.11 4-4
p f1.NC 6-10
p 6-11 f1.1i
s f1.op1 A0
s f1.cl1 NC
s f1.rp1 1
s f1.mpm1 T
s f1.A1D D
s f1.A2D D
s f1.A3D D
s f1.A4D D
s f1.B1D D
s f1.B2D D
s f1.B3D D
s f1.B4D D
s f1.RA0L6 9
s f1.RA2S M
s f1.RA3L6 9
s f1.RA4S M
s f1.RA4L6 9

# Accumulator 1
p 5 a1.α
p a1.A 5
p 6-4 a1.2i
p 3-2 a1.3i
p 7-6 a1.5i
p a1.5o 6-11
p 9-3 a1.6i
# p a1.6o 7-11
p a1.6o 7-8
p 1-4 a1.7i
s a1.sf 10
s a1.sc SC
s a1.op2 A
s a1.op3 A
s a1.op5 0
s a1.rp5 5
s a1.op6 0
s a1.rp6 1
s a1.op7 α
s a1.rp7 2

# Accumulator 2
p 5 a2.α
p a2.A 5
p 4-7 a2.2i
p 6-5 a2.3i
p 7-3 a2.5i
p a2.5o 6-11
p 7-7 a2.6i
p a2.6o 10-3
p 9-3 a2.7i
p a2.7o 9-4
p 1-6 a2.8i
s a2.sf 10
s a2.sc SC
s a2.op2 A
s a2.op3 A
s a2.op5 0
s a2.rp5 4
s a2.op6 0
s a2.rp6 8
s a2.op7 0
s a2.rp7 1
s a2.op8 α
s a2.rp8 2

# Accumulator 3
p 5 a3.α
p a3.A 5
p 1-9 a3.1i
p 6-1 a3.2i
p 7-8 a3.5i
p a3.5o 2-6
p 8-5 a3.6i
p a3.6o 2-6
# p 7-11 a3.8i
# p a3.8o 2-6
s a3.sf 10
s a3.sc SC
s a3.op1 α
s a3.op2 A
s a3.op5 0
s a3.rp5 9
s a3.op6 0
s a3.rp6 9
# s a3.op8 0
# s a3.rp8 9

#Accumulator 4
p 5 a4.α
p a4.A 5
p 1-10 a4.1i
p 7-8 a4.5i
p a4.5o 6-11
p 8-2 a4.6i
p a4.6o 9-1
p 8-5 a4.7i
p a4.7o 6-11
# p 7-11 a4.8i
# p a4.8o 6-11
s a4.sf 10
s a4.sc SC
s a4.op1 α
s a4.op5 0
s a4.rp5 4
s a4.op6 0
s a4.rp6 7
s a4.op7 0
s a4.rp7 4
# s a4.op8 0
# s a4.rp8 4

# Accumulator 5
p 5 a5.α
p a5.A ad.d.1.6
p ad.d.1.6 5
p 1-11 a5.1i
p 9-11 a5.5i
p a5.5o 10-1
s a5.sf 10
s a5.op1 α
s a5.op5 0
s a5.rp5 1

# Accumulator 6
p 5 a6.α
p a6.A 5
p 2-9 a6.1i
p 8-9 a6.5i
p a6.5o 9-1
p 9-11 a6.6i
p a6.6o 8-5
s a6.sf 10
s a6.sc SC
s a6.op1 α
s a6.op5 0
s a6.rp5 7
s a6.op6 0
s a6.rp6 1

#Accumulator 7
p 5 a7.α
p a7.A 5
p 2-10 a7.1i
p 7-7 a7.5i
p a7.5o 9-1
p 9-5 a7.6i
p a7.6o 9-6
p 9-7 a7.7i
p a7.7o 9-8
p 9-9 a7.8i
p a7.8o 9-10
s a7.sf 10
s a7.sc SC
s a7.op1 α
s a7.op5 0
s a7.rp5 6
s a7.op6 0
s a7.rp6 1
s a7.op7 0
s a7.rp7 1
s a7.op8 0
s a7.rp8 1

# Accumulator 8
p 5 a8.α
p a8.A 5
p 1-8 a8.1i
p 3-1 a8.2i
p 6-10 a8.3i
p 9-4 a8.4i
p 9-5 a8.5i
p a8.5o 7-8
p 8-4 a8.6i
p a8.6o 9-1
p 9-7 a8.7i
p a8.7o 8-5
p 8-7 a8.8i
p a8.8o 9-1
p 9-9 a8.9i
p a8.9o 7-8
s a8.sf 10
s a8.sc SC
s a8.op1 α
s a8.op2 β
s a8.cc2 C
s a8.op3 A
s a8.op4 A
s a8.op5 0
s a8.rp5 1
s a8.op6 0
s a8.rp6 7
s a8.op7 0
s a8.rp7 1
s a8.op8 0
s a8.rp8 7
s a8.op9 0
s a8.rp9 1

# Accumulator 9
p 5 a9.α
p 5 ad.s.1.5
p ad.s.1.5 a9.β
p 3 a9.γ
p 4 a9.δ
p a9.S 6
p 5-9 a9.5i
s a9.sf 10
s a9.op1 α
s a9.op2 β
s a9.op3 γ
s a9.op4 δ
s a9.op5 S
s a9.rp5 1

# Accumulator 10
p 5 ad.d.2.5
p ad.d.2.5 a10.α
p 5 ad.s.2.5
p ad.s.2.5 a10.β
p 3 a10.γ
p 1 a10.ε
p a10.S 7
p 5-10 a10.3i
p 7-4 a10.1i
p 7-9 a10.2i
p 7-2 a10.5i
p a10.5o 7-3
s a10.sf 10
s a10.op1 β
s a10.op2 β
s a10.op3 S
s a10.op4 ε
s a10.op5 β
s a10.rp5 1

# Multiplier
p m.lhppI 9
p m.rhppI 8
p m.Rα a9.1i
p m.Rβ a9.2i
p m.Rγ a9.3i
p m.Rδ a9.4i
p m.Dε a10.4i
p m.AC a13.1i
p m.ASC a13.2i
p m.RS 5-9
p m.DS 5-10
p m.F 5-11
p 7-3 m.1i
p m.1o 7-4
p 7-5 m.2i
p m.2o 7-6
p 7-6 m.3i
p m.3o 7-7
p 7-7 m.4i
p 7-8 m.5i
p m.5o 7-9
p 8-5 m.6i
p m.6o 7-9
p 8-1 m.7i
p m.7o 8-2
p 8-2 m.8i
p 8-3 m.9i
p m.9o 8-4
p 8-4 m.10i
p 8-6 m.11i
p m.11o 8-7
p 8-7 m.12i
p 8-8 m.13i
p m.13o 8-9
p 8-9 m.14i
# p 7-11 m.15i
# p m.15o 7-9
p a11.st1 m.l
p a13.st1 m.r
s m.ieracc1 α
s m.icandacc1 0
s m.sf1 10
s m.place1 5
s m.iercl1 C
s m.icandcl1 C
s m.prod1 AC
s m.ieracc2 α
s m.icandacc2 0
s m.sf2 10
s m.place2 5
s m.iercl2 C
s m.icandcl2 C
s m.prod2 AC
s m.ieracc3 γ
s m.icandacc3 ε
s m.sf3 10
s m.place3 6
s m.iercl3 C
s m.icandcl3 C
s m.prod3 AC
s m.ieracc4 β
s m.icandacc4 ε
s m.sf4 10
s m.place4 5
s m.iercl4 C
s m.icandcl4 0
s m.prod4 ASC
s m.ieracc5 α
s m.icandacc5 ε
s m.sf5 10
s m.place5 5
s m.iercl5 C
s m.icandcl5 C
s m.prod5 ASC
s m.ieracc6 β
s m.icandacc6 ε
s m.sf6 10
s m.place6 5
s m.iercl6 C
s m.icandcl6 C
s m.prod6 ASC
s m.ieracc7 β
s m.icandacc7 0
s m.sf7 10
s m.place7 5
s m.iercl7 C
s m.icandcl7 C
s m.prod7 AC
s m.ieracc8 δ
s m.icandacc8 ε
s m.sf8 10
s m.place8 6
s m.iercl8 C
s m.icandcl8 C
s m.prod8 AC
s m.ieracc9 α
s m.icandacc9 0
s m.sf9 10
s m.place9 5
s m.iercl9 C
s m.icandcl9 C
s m.prod9 AC
s m.ieracc10 δ
s m.icandacc10 ε
s m.sf10 10
s m.place10 6
s m.iercl10 C
s m.icandcl10 C
s m.prod10 AC
s m.ieracc11 β
s m.icandacc11 0
s m.sf11 10
s m.place11 5
s m.iercl11 C
s m.icandcl11 C
s m.prod11 AC
s m.ieracc12 γ
s m.icandacc12 ε
s m.sf12 10
s m.place12 6
s m.iercl12 C
s m.icandcl12 C
s m.prod12 AC
s m.ieracc13 α
s m.icandacc13 0
s m.sf13 10
s m.place13 5
s m.iercl13 C
s m.icandcl13 C
s m.prod13 AC
s m.ieracc14 γ
s m.icandacc14 ε
s m.sf14 10
s m.place14 6
s m.iercl14 C
s m.icandcl14 C
s m.prod14 AC
# s m.ieracc15 α
# s m.icandacc15 0
# s m.sf15 10
# s m.place15 5
# s m.iercl15 C
# s m.icandcl15 C
# s m.prod15 ASC

# Accumulator 11
p a11.A 7
p 9 a11.α
p 6 a11.β
p 5-11 a11.3i
p 5-9 a11.4i
p 2-1 a11.5i
p a11.5o 2-2
p 7-1 a11.6i
p a11.6o 6-11
s a11.sf 10
s a11.sc 0
s a11.op3 A
s a11.cc3 C
s a11.op4 β
s a11.cc4 0
s a11.op5 0
s a11.cc5 0
s a11.rp5 1
s a11.op6 0
s a11.cc6 0
s a11.rp6 1

# Accumulator 12
p a12.A 3
p 1 a12.α
p 7-6 a12.1i
p 8-4 a12.2i
p 8-7 a12.3i
p 8-9 a12.4i
p 2-1 a12.5i
p a12.5o 2-3
p 7-4 a12.6i
p a12.6o 7-5
s a12.sf 10
s a12.sc SC
s a12.op1 A
s a12.cc1 C
s a12.op2 α
s a12.cc2 0
s a12.op3 A
s a12.cc3 0
s a12.op4 A
s a12.cc4 0
s a12.op5 0
s a12.cc5 0
s a12.rp5 1
s a12.op6 α
s a12.cc6 0
s a12.rp6 1

# Accumulator 13
p a13.A 1
p a13.S 2
p 8 a13.α
p 7 a13.β
p 5-11 a13.3i
p 5-10 a13.4i
p 7-1 a13.5i
p a13.5o 7-2
s a13.sf 10
s a13.sc 0
s a13.op1 A
s a13.cc1 C
s a13.op2 AS
s a13.cc2 C
s a13.op3 β
s a13.cc3 0
s a13.op4 β
s a13.cc4 0
s a13.op5 0
s a13.cc5 0
s a13.rp5 6

# Accumulator 14
p 1 ad.s.3.-1
p ad.s.3.-1 a14.α
p 2 ad.s.4.-1
p ad.s.4.-1 a14.β
p 10-4 a14.5i
p a14.5o 10-6
s a14.sf 6
s a14.sc SC
s a14.op5 α
s a14.cc5 0
s a14.rp5 9

# Function Table 2
s f2.Ninep Cpp
p 5 f2.arg
p f2.A ad.dp.3.0
p ad.dp.3.11 4-5
p ad.dp.3.6 4-6
p ad.dp.3.5 4-7
p ad.dp.3.4 4-8
p ad.dp.3.3 4-9
p ad.dp.3.2 4-10
p ad.dp.3.1 4-11
p f2.B ad.dp.4.0
p ad.dp.4.6 5-1
p ad.dp.4.5 5-2
p ad.dp.4.4 5-3
p ad.dp.4.3 5-4
p ad.dp.4.2 5-5
p ad.dp.4.1 5-6
p ad.dp.4.11 5-7
p 6-11 f2.1i
p 10-7 f2.2i
p f2.2o 10-8
p 10-10 f2.3i
p f2.3o 10-11
p 11-2 f2.4i
p f2.4o 11-3
p 11-5 f2.5i
p f2.5o 11-6
s f2.op1 A0
s f2.cl1 0
s f2.rp1 1
s f2.op2 A-1
s f2.cl2 0
s f2.rp2 7
s f2.op3 A-1
s f2.cl3 0
s f2.rp3 7
s f2.op4 A-1
s f2.cl4 0
s f2.rp4 7
s f2.op5 A-1
s f2.cl5 0
s f2.rp5 7
s f2.RA0L5 9
s f2.RA1L4 9
s f2.RA3L5 9
s f2.RA5L4 9
s f2.RA6L4 9
s f2.RA6L5 9

# Function Table 3
s f3.Ninep Cpp
p 5 f3.arg
p f3.A ad.dp.5.0
p ad.dp.5.11 5-8
p ad.dp.5.6 5-9
p ad.dp.5.5 5-10
p ad.dp.5.4 5-11
p ad.dp.5.3 6-1
p ad.dp.5.2 6-2
p ad.dp.5.1 6-4
p 6-11 f3.1i
p f3.1o 3-1
s f3.op1 A0
s f3.cl1 0
s f3.rp1 1
s f3.mpm1 T
s f3.mpm2 T
s f3.A1D D
s f3.A2D D
s f3.A3D D
s f3.A4D D
s f3.B1D D
s f3.B2D D
s f3.B3D D
s f3.B4D D
s f3.RA1L3 9
s f3.RA5L3 9

# Accumulator 15
p a15.A 4
p 1 a15.α
p 7-6 a15.1i
p 8-2 a15.2i
p 8-4 a15.3i
p 3-3 a15.5i
p a15.5o 6-4
p 4-8 a15.6i
p a15.6o 6-5
s a15.sf 10
s a15.sc SC
s a15.op1 α
s a15.cc1 0
s a15.op2 A
s a15.cc2 0
s a15.op3 A
s a15.cc3 C
s a15.op5 0
s a15.cc5 0
s a15.rp5 1
s a15.op6 0
s a15.cc6 0
s a15.rp6 1

# Accumulator 16
p 1 ad.s.5.-1
p ad.s.5.-1 a16.α
p 2 ad.s.6.-1
p ad.s.6.-1 a16.β
p 10-6 a16.5i
p a16.5o 10-7
p 10-8 a16.6i
p a16.6o 10-9
s a16.sf 6
s a16.sc SC
s a16.op5 α
s a16.cc5 0
s a16.rp5 9
s a16.op6 0
s a16.cc6 0
s a16.rp6 9

# Accumulator 17
p 1 ad.s.7.-1
p ad.s.7.-1 a17.α
p 2 ad.s.8.-1
p ad.s.8.-1 a17.β
p 10-9 a17.5i
p a17.5o 10-10
p 10-11 a17.6i
p a17.6o 11-1
s a17.sf 6
s a17.sc SC
s a17.op5 α
s a17.cc5 0
s a17.rp5 9
s a17.op6 0
s a17.cc6 0
s a17.rp6 9

# Accumulator 18
p 1 ad.s.9.-1
p ad.s.9.-1 a18.α
p 2 ad.s.10.-1
p ad.s.10.-1 a18.β
p 11-1 a18.5i
p a18.5o 11-2
p 11-3 a18.6i
p a18.6o 11-4
s a18.sf 6
s a18.sc SC
s a18.op5 α
s a18.cc5 0
s a18.rp5 9
s a18.op6 0
s a18.cc6 0
s a18.rp6 9

# Accumulator 19
p 1 ad.s.11.-1
p ad.s.11.-1 a19.α
p 2 ad.s.12.-1
p ad.s.12.-1 a19.β
p 11-4 a19.5i
p a19.5o 11-5
p 11-6 a19.6i
p a19.6o 11-7
s a19.sf 6
s a19.sc SC
s a19.op5 α
s a19.cc5 0
s a19.rp5 9
s a19.op6 0
s a19.cc6 0
s a19.rp6 9

# Accumulator 20
p 1 ad.s.13.-1
p ad.s.13.-1 a20.α
p 2 ad.s.14.-1
p ad.s.14.-1 a20.β
p 11-7 a20.5i
p a20.5o 2-8
s a20.sf 6
s a20.sc SC
s a20.op5 α
s a20.cc5 0
s a20.rp5 1

# Constant Transmitter
p c.o 5
p 1-4 c.1i
p c.1o 1-5
p 1-5 c.2i
p c.2o 1-6
p 1-6 c.3i
p c.3o 1-7
p 1-7 c.4i
p c.4o 1-8
p 1-8 c.7i
p c.7o 1-9
p 1-9 c.8i
p c.8o 1-10
p 1-10 c.9i
p c.9o 1-11
p 1-11 c.13i
p c.13o 2-9
p 2-9 c.14i
p c.14o 2-10
p 2-10 c.19i
p c.19o 1-3
p 9-6 c.25i
p 9-8 c.26i
p 9-10 c.27i
p 10-1 c.28i
s c.s1 Al
s c.s2 Ar
s c.s3 Bl
s c.s4 Br
s c.s7 Cl
s c.s8 Cr
s c.s9 Dr
s c.s13 El
s c.s14 Fr
s c.s19 Hl
s c.s25 Jl
s c.s26 Jr
s c.s27 Kl
s c.s28 Kr

s c.jl P
s c.jr P
s c.j10 2
s c.j9 0
s c.j8 0
s c.j7 0
s c.j6 0
s c.j5 3
s c.j4 0
s c.j3 0
s c.j2 0
s c.j1 0
s c.kl P
s c.kr P
s c.k10 4
s c.k9 0
s c.k8 0
s c.k7 0
s c.k6 0
s c.k5 5
s c.k4 0
s c.k3 0
s c.k2 0
s c.k1 0

f r ch8.card
