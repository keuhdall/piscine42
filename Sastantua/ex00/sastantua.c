/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 23:33:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/10 23:34:36 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_putchar(char c);

int _display_sequence(char arg0, int arg1) {
	int rax;
	int var_8;
	int var_4;

	rax = arg0;
	var_8 = arg1;
	var_4 = rax;
	while (var_8 > 0x0) {
		//rax = _ft_putchar(var_4 << 31);
		rax = _ft_putchar(arg0);
		var_8 = var_8 - 0x1;

	}
	return rax;

}

int _calc_width_top_floor(int arg0, int arg1) {
	int var_14 = arg0;
	int var_18 = arg1;
	int var_4 = 0x3;
	for (int var_8 = 0x0; var_18 - var_14 > var_8; var_8 = var_8 + 0x1) {
		for (int var_C = var_8 + 0x3; var_C > 0x0; var_C = var_C - 0x1) {
			var_4 = var_4 + 0x2;

		}
		var_4 = var_4 + (((var_8 + (var_8 >> 0x1f)) / 0x1)) + (((var_8 + (var_8 >> 0x1f)) / 0x1)) + 0x4;

	}
	int rax = var_4;
	return rax;

}

int _calc_space_top_floot(int arg0, int arg1) {
	int var_14 = arg0;
	int var_18 = arg1;
	int rax = _calc_width_top_floor(0x1, var_18);
	int var_4 = (((((rax + var_18 + var_18 + 0x2 >> 0x1f) + rax + var_18 + var_18 + 0x2) / 0x1)) - 0x1) / 2 - 1;
	for (int var_8 = 0x0; var_18 - var_14 > var_8; var_8 = var_8 + 0x1) {
		for (int var_C = var_8 + 0x3; var_C > 0x0; var_C = var_C - 0x1) {
			var_4 = var_4 - 0x1;

		}
		var_4 = var_4 + ((0xfffffffe - (var_8 + (var_8 >> 0x1f))/ 0x1));

	}
	rax = var_4;
	return rax;

}

int _display_floor(int arg0, int arg1, int arg2) {
	int var_28 = arg1;
	int var_2C = arg2;
	int var_14 = (var_28 - arg0) + 0x3;
	int var_4 = _calc_space_top_floot(arg0, var_28);
	int var_8 = _calc_width_top_floor(arg0, var_28);
	int rax;
	if ((var_28 & 0x1) == 0x0) {
		rax = var_28 - 0x1;

	}
	else {
		rax = var_28;

	}
	int var_18 = rax;
	int var_C = 0x0;
	do {
		rax = var_C;
		if (rax >= var_14) {
			break;

		}
		_display_sequence(0x20, var_4);
		_display_sequence(0x2f, 0x1);
		if ((var_2C != 0x0) && (var_14 - var_18 <= var_C)) {
			_display_sequence(0x2a, ((((var_8 + (var_8 >> 0x1f))/ 0x1) - ((var_18 + (var_18 >> 0x1f))/ 0x1) - 0x1) / 2));
			if ((var_18 > 0x4) && ((var_14 - (((var_18 + (var_18 >> 0x1f)) / 0x2)) - 0x1) == var_C)){
				_display_sequence(0x7c, var_18 - 0x2);
				_display_sequence(0x24, 0x1);
				_display_sequence(0x7c, 0x1);

			}
			else {
				_display_sequence(0x7c, var_18);

			}
			_display_sequence(0x2a, ((((var_8 + (var_8 >> 0x1f)) / 0x1)) - (((var_18 + (var_18 >> 0x1f)) / 0x1)) - 0x1) / 2);

		}
		else {
			_display_sequence(0x2a, var_8 - 0x2);

		}
		_display_sequence(0x5c, 0x1);
		var_4 = var_4 - 0x1;
		var_8 = var_8 + 0x2;
		_ft_putchar(0xa);
		var_C = var_C + 0x1;

	} while (1);
	return rax;

}

void	sastantua(int arg0) {
	int var_14 = arg0;
	int rax = var_14;
	int var_4 = rax;
	if (var_14 > 0x0) {
		while (var_14 > 0x0) {
			rax = _display_floor(var_14, var_4, (var_14 == 0x1 ? 0x1 : 0x0) & 0xff);
			var_14 = var_14 - 0x1;

		}

	}
}
