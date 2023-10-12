#pragma once
#include <algorithm>

template<typename iterator>
void simple_sort(iterator start, iterator end)
	requires(std::forward_iterator<iterator> && std::input_or_output_iterator<iterator>)
{
	for (; start != end; start++)
	{
		auto it = start;
		it++;
		for (; it != end; it ++)
		{
			// Compare si les deux elements sont dans le bon ordre
			if (*start > *it)
				std::swap(*start, *it);
		}
	}
	
}
