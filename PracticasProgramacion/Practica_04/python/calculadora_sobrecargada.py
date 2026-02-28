"""
CalculadoraSobrecargada: variantes de calcular() según cantidad de args.
Python no soporta overload nativo; usamos args y lógica condicional.
"""


class CalculadoraSobrecargada:
    def calcular(self, *args: float) -> float:
        if len(args) == 0:
            return 0.0
        if len(args) == 2:
            return args[0] + args[1]
        if len(args) == 3:
            return args[0] + args[1] + args[2]
        return 0.0
