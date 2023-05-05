/* INIZIO FUNZIONI */



int fattoriale(int x) {

	int i, result;

	result = 1;

	for (i = x; i > 1; i--) {
		result = result * i;
	}

	if (x < 0) {
		return 'E';
	}

	return result;
}



double potenza(int base, int esponente) {

	int i;
	double result;

	result = base;
	i = esponente;

	if (esponente > 1) {
		for (i; i > 1; i--) {
			result = result * base;
		}
		return result;
	}
	
	if (esponente < 0) {
		for (i; i < -1; i++) {
			result = result * base;
		}
		result = 1 / result;

		return result;
	}

	if (esponente == 0) {
		return 1;
	}

	return result;
}



double coefficienteBinomiale(int n, int k) {

	if (k > n) {
		return 'E';
	}

	int x, y, c, differenza;
	double result;

	x = fattoriale(n);
	y = fattoriale(k);

	differenza = n - k;
	c = fattoriale(differenza);

	result = x / (y * c);

	return result;
}



double binomialeSimmetrico(int n, int h, int k) {

	int x, y, z;
	double result;

	x = fattoriale(n);
	y = fattoriale(h);
	z = fattoriale(k);

	result = x / (y * z);

	return result;
}



int radiceQnotevoli(int x) {

	int i, a;
	a = 1;

	for (i = 0; i >= 0; i++) {
		a = i * i;
		if (a == x) {
			return i;
		}
	}

	if (x < 0) {
		return 'E';
	}
}



/* FINE FUNZIONI */

/* INIZIO AREE */



double areaTriangolo(int base, int altezza) {

	double area;

	area = (base * altezza) / 2;

	return area;
}



double areaQuadrato(int lato) {

	double area;

	area = potenza(lato, 2);
	
	return area;
}



int areaParallelogramma(int base, int altezza) {

	int area;

	area = base * altezza;

	return area;
}



double areaRombo(int d1, int d2) {

	double area;

	area = (d1 * d2) / 2;

	return area;
}



double areaTrapezio(int b1, int b2, int altezza) {

	double area;

	area = ((b1 + b2) * altezza) / 2;

	return area;
}



double areaCfr(int raggio) {

	double area;

	area = 3.14 * potenza(raggio, 2);

	return area;
}



double areaCoronacir(int rex, int rin) {

	double area;

	area = ((potenza(rex, 2) - potenza(rin, 2)) * 3.14) / 2;

	return area;
}



/* FINE AREE */

/* INIZIO VOLUMI */



double volumeRettangolo(int l, int p, int h) {

	double volume;

	volume = areaParallelogramma(l, p) * h;

	return volume;
}



double volumeCubo(int l) {

	double volume;

	volume = potenza(l, 3);

	return volume;
}



double volumePiramide(int base, int altezza, int h) {

	double volume;

	volume = (areaTriangolo(base, altezza) * h) / 3;

	return volume;
}