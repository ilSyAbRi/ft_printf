/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:19 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 23:11:02 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h> // For INT_MAX, INT_MIN, etc.

void print_test_results(int ret_ft, int ret_std, const char *test_name)
{
    printf("\n--- %s ---\n", test_name);
    printf("ft_printf returned: %d\n", ret_ft);
    printf("Standard printf returned: %d\n", ret_std);
    if (ret_ft == ret_std)
        printf("RESULT: ✅ MATCH\n");
    else
        printf("RESULT: ❌ MISMATCH\n");
    printf("----------------------------------------\n");
}

int main(void)
{
    int ret_ft;
    int ret_std;
    char *null_str = NULL;
    char *valid_str = "42 Born To Code";
    int *null_ptr = NULL;
    int test_var = 1337;
    int *valid_ptr = &test_var;

    printf("========================================\n");
    printf("         FT_PRINTF CORE TESTS         \n");
    printf("========================================\n\n");

    // TEST 1: Strings and Characters (%s, %c)
    // Critical: NULL string, empty string, zero character (\0)
    ret_ft = ft_printf("FT: [%s], [%s], [%c] end\n", null_str, "", '\0');
    ret_std = printf("STD: [%s], [%s], [%c] end\n", null_str, "", '\0');
    print_test_results(ret_ft, ret_std, "1. String/Char/NULL");

    // TEST 2: Signed Integers (%d, %i)
    // Critical: INT_MAX, INT_MIN
    ret_ft = ft_printf("FT: Max: %d, Min: %i, Zero: %d\n", INT_MAX, INT_MIN, 0);
    ret_std = printf("STD: Max: %d, Min: %i, Zero: %d\n", INT_MAX, INT_MIN, 0);
    print_test_results(ret_ft, ret_std, "2. Signed Boundaries");

    // TEST 3: Unsigned Integers (%u)
    // Critical: UINT_MAX, value slightly over INT_MAX
    ret_ft = ft_printf("FT: UMax: %u, Mid: %u\n", UINT_MAX, (unsigned int)INT_MAX + 1);
    ret_std = printf("STD: UMax: %u, Mid: %u\n", UINT_MAX, (unsigned int)INT_MAX + 1);
    print_test_results(ret_ft, ret_std, "3. Unsigned Boundaries");

    // TEST 4: Hexadecimal (%x, %X)
    // Critical: Signed -1 (all 'f's), Mixed case
    ret_ft = ft_printf("FT: Lower: %x, Upper: %X, Neg: %x\n", 4095, 4095, 10);
    ret_std = printf("STD: Lower: %x, Upper: %X, Neg: %x\n", 4095, 4095, 10);
    print_test_results(ret_ft, ret_std, "4. Hexadecimal Cases");

    // TEST 5: Pointer (%p)
    // Critical: NULL pointer, valid 64-bit pointer
    ret_ft = ft_printf("FT: Ptr NULL: %p, Ptr Valid: %p\n", null_ptr, valid_ptr);
    ret_std = printf("STD: Ptr NULL: %p, Ptr Valid: %p\n", null_ptr, valid_ptr);
    print_test_results(ret_ft, ret_std, "5. Pointer Cases");

    // TEST 6: Literal and Bad Specifier (%%, %k)
    // Critical: Literal '%' and unhandled conversion
    ret_ft = ft_printf("FT: Start %% Middle %k End\n");
    ret_std = printf("STD: Start %% Middle %k End\n");
    print_test_results(ret_ft, ret_std, "6. Literal & Bad Spec");

    return 0;
}
