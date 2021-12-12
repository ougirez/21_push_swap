/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yironmak <yironmak@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:53:38 by yironmak          #+#    #+#             */
/*   Updated: 2021/12/12 19:15:33 by yironmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				n;
	struct s_list	*next;
}				t_list;

void	fill_a(t_list **a, int argc, char **argv);
void	push_back(t_list **list, int n);
void	push_front(t_list **list, int n);
int		list_size(t_list *list);
void	free_list(t_list **list);
int		is_sorted(t_list *list);
t_list	*last(t_list *list);
int		list_min(t_list *list);
int		list_max(t_list *list);

void	sort_3(t_list **a);
void	roll_push_roll(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);

void	sa(t_list **a, int print);
void	sb(t_list **b, int print);
void	ss(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	ra(t_list **a, int print);
void	rb(t_list **b, int print);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a, int print);
void	rrb(t_list **b, int print);
void	rrr(t_list **a, t_list **b);

void	print_list(t_list *list);

#endif