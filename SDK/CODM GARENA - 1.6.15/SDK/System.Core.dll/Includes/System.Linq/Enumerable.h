#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class Enumerable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "Enumerable"));
	}

	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T All(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45EC758))(0, source, predicate);
	}
	template <typename T = bool> static T Any(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x45ECDC0))(0, source);
	}
	template <typename T = bool> static T Any_1(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45ED0CC))(0, source, predicate);
	}
	template <typename T = void*> static T Cast(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F57AC))(0, source);
	}
	template <typename T = void*> static T CreateCastIterator(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F5870))(0, source);
	}
	template <typename T = void*> static T Concat(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F634C))(0, first, second);
	}
	template <typename T = void*> static T CreateConcatIterator(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F638C))(0, first, second);
	}
	template <typename T = bool> static T Contains(void* source, uintptr_t value) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x45EDE04))(0, source, value);
	}
	template <typename T = bool> static T Contains_1(void* source, uintptr_t value, void* comparer) {
		return ((T (*)(void *, void*, uintptr_t, void*))(Il2CppBase() + 0x45EDEEC))(0, source, value, comparer);
	}
	template <typename T = int32_t> static T Count(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E63D4C))(0, source);
	}
	template <typename T = void*> static T Distinct(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x45F6914))(0, source);
	}
	template <typename T = void*> static T Distinct_1(void* source, void* comparer) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F692C))(0, source, comparer);
	}
	template <typename T = void*> static T CreateDistinctIterator(void* source, void* comparer) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F6400))(0, source, comparer);
	}
	template <typename T = uintptr_t> static T ElementAt(void* source, int32_t index, uintptr_t fallback) {
		return ((T (*)(void *, void*, int32_t, uintptr_t))(Il2CppBase() + 0x4E4FD5C))(0, source, index, fallback);
	}
	template <typename T = uintptr_t> static T ElementAt_1(void* source, int32_t index) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x4E4FBCC))(0, source, index);
	}
	template <typename T = uintptr_t> static T ElementAtOrDefault(void* source, int32_t index) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x4E50120))(0, source, index);
	}
	template <typename T = void*> static T Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F5EEC))(0);
	}
	template <typename T = void*> static T Except(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F6AA4))(0, first, second);
	}
	template <typename T = void*> static T Except_1(void* first, void* second, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F6AD4))(0, first, second, comparer);
	}
	template <typename T = void*> static T CreateExceptIterator(void* first, void* second, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F64E8))(0, first, second, comparer);
	}
	template <typename T = uintptr_t> static T First(void* source, void* predicate, uintptr_t fallback) {
		return ((T (*)(void *, void*, void*, uintptr_t))(Il2CppBase() + 0x4E51D94))(0, source, predicate, fallback);
	}
	template <typename T = uintptr_t> static T First_1(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E518E4))(0, source);
	}
	template <typename T = uintptr_t> static T First_2(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E51D44))(0, source, predicate);
	}
	template <typename T = uintptr_t> static T FirstOrDefault(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E52608))(0, source);
	}
	template <typename T = uintptr_t> static T FirstOrDefault_1(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E52958))(0, source, predicate);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T ContainsGroup(Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>* items, uintptr_t key, void* comparer) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*, uintptr_t, void*))(Il2CppBase() + 0x21D3AEC))(0, items, key, comparer);
	}
	template <typename T = void*> static T GroupBy(void* source, void* keySelector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F555C))(0, source, keySelector);
	}
	template <typename T = void*> static T GroupBy_1(void* source, void* keySelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F558C))(0, source, keySelector, comparer);
	}
	template <typename T = void*> static T CreateGroupByIterator(void* source, void* keySelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F54DC))(0, source, keySelector, comparer);
	}
	template <typename T = void*> static T GroupBy_2(void* source, void* keySelector, void* elementSelector) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F5448))(0, source, keySelector, elementSelector);
	}
	template <typename T = void*> static T GroupBy_3(void* source, void* keySelector, void* elementSelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x45F547C))(0, source, keySelector, elementSelector, comparer);
	}
	template <typename T = void*> static T CreateGroupByIterator_1(void* source, void* keySelector, void* elementSelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x45F53BC))(0, source, keySelector, elementSelector, comparer);
	}
	template <typename T = void*> static T Join(void* outer, void* inner, void* outerKeySelector, void* innerKeySelector, void* resultSelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x45F5F60))(0, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
	}
	template <typename T = void*> static T CreateJoinIterator(void* outer, void* inner, void* outerKeySelector, void* innerKeySelector, void* resultSelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x45F58D8))(0, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
	}
	template <typename T = void*> static T Join_1(void* outer, void* inner, void* outerKeySelector, void* innerKeySelector, void* resultSelector) {
		return ((T (*)(void *, void*, void*, void*, void*, void*))(Il2CppBase() + 0x45F5F1C))(0, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
	}
	template <typename T = uintptr_t> static T Last(void* source, void* predicate, uintptr_t fallback) {
		return ((T (*)(void *, void*, void*, uintptr_t))(Il2CppBase() + 0x4E53F3C))(0, source, predicate, fallback);
	}
	template <typename T = uintptr_t> static T Last_1(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E539D4))(0, source);
	}
	template <typename T = uintptr_t> static T LastOrDefault(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E54308))(0, source);
	}
	template <typename T = uintptr_t> static T LastOrDefault_1(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E54838))(0, source, predicate);
	}
	template <typename T = float> static T Max(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4EC3130))(0, source);
	}
	template <typename T = uintptr_t> static T IterateNullable(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E53650))(0, source, selector);
	}
	template <typename T = uintptr_t> static T IterateNonNullable(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E52E38))(0, source, selector);
	}
	template <typename T = uintptr_t> static T Max_1(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E54A14))(0, source);
	}
	template <typename T = uintptr_t> static T Iterate(void* source, uintptr_t initValue, void* selector) {
		return ((T (*)(void *, void*, uintptr_t, void*))(Il2CppBase() + 0x4E57134))(0, source, initValue, selector);
	}
	template <typename T = uintptr_t> static T Max_2(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E44EAC))(0, source, selector);
	}
	template <typename T = void*> static T OfType(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F603C))(0, source);
	}
	template <typename T = void*> static T CreateOfTypeIterator(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F597C))(0, source);
	}
	template <typename T = void*> static T OrderBy(void* source, void* keySelector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x1E65668))(0, source, keySelector);
	}
	template <typename T = void*> static T OrderBy_1(void* source, void* keySelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x1E65698))(0, source, keySelector, comparer);
	}
	template <typename T = void*> static T OrderByDescending(void* source, void* keySelector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x1E659C4))(0, source, keySelector);
	}
	template <typename T = void*> static T OrderByDescending_1(void* source, void* keySelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x1E659F4))(0, source, keySelector, comparer);
	}
	template <typename T = void*> static T Reverse(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x45F6B98))(0, source);
	}
	template <typename T = void*> static T CreateReverseIterator(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x45F6568))(0, source);
	}
	template <typename T = void*> static T Select(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F6234))(0, source, selector);
	}
	template <typename T = void*> static T CreateSelectIterator(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F5D10))(0, source, selector);
	}
	template <typename T = void*> static T SelectMany(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F630C))(0, source, selector);
	}
	template <typename T = void*> static T CreateSelectManyIterator(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F5E78))(0, source, selector);
	}
	template <typename T = void*> static T SelectMany_1(void* source, void* collectionSelector, void* selector) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F62B4))(0, source, collectionSelector, selector);
	}
	template <typename T = void*> static T CreateSelectManyIterator_1(void* source, void* collectionSelector, void* selector) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F5DF8))(0, source, collectionSelector, selector);
	}
	template <typename T = uintptr_t> static T Single(void* source, void* predicate, uintptr_t fallback) {
		return ((T (*)(void *, void*, void*, uintptr_t))(Il2CppBase() + 0x4E54FC0))(0, source, predicate, fallback);
	}
	template <typename T = uintptr_t> static T Single_1(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E54BF8))(0, source);
	}
	template <typename T = uintptr_t> static T SingleOrDefault(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E553DC))(0, source);
	}
	template <typename T = uintptr_t> static T SingleOrDefault_1(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E55764))(0, source, predicate);
	}
	template <typename T = int32_t> static T Sum(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4EC326C))(0, source);
	}
	template <typename T = double> static T Sum_1(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x21DDEF4))(0, source, selector);
	}
	template <typename T = uintptr_t> static T Sum_2(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E44AE4))(0, source, selector);
	}
	template <typename T = void*> static T Take(void* source, int32_t count) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x45F6BD0))(0, source, count);
	}
	template <typename T = void*> static T CreateTakeIterator(void* source, int32_t count) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x45F65D0))(0, source, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToArray(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4E55ED4))(0, source);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T ToDictionary(void* source, void* keySelector, void* elementSelector) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F4C74))(0, source, keySelector, elementSelector);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T ToDictionary_1(void* source, void* keySelector, void* elementSelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x45F4CA8))(0, source, keySelector, elementSelector, comparer);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T ToList(void* source) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x21D462C))(0, source);
	}
	template <typename T = void*> static T ToLookup(void* source, void* keySelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x1E65534))(0, source, keySelector, comparer);
	}
	template <typename T = void*> static T ToLookup_1(void* source, void* keySelector, void* elementSelector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x1E64FC0))(0, source, keySelector, elementSelector, comparer);
	}
	template <typename T = bool> static T SequenceEqual(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45EEAB4))(0, first, second);
	}
	template <typename T = bool> static T SequenceEqual_1(void* first, void* second, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45EEAE4))(0, first, second, comparer);
	}
	template <typename T = void*> static T Union(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F6D24))(0, first, second);
	}
	template <typename T = void*> static T Union_1(void* first, void* second, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F6D74))(0, first, second, comparer);
	}
	template <typename T = void*> static T CreateUnionIterator(void* first, void* second, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x45F66C4))(0, first, second, comparer);
	}
	template <typename T = void*> static T Where(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F6EF8))(0, source, predicate);
	}
	template <typename T = void*> static T CreateWhereIterator(void* source, void* predicate) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x45F68A0))(0, source, predicate);
	}
	template <typename T = float> static T Maxm__17(float a, float b) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4EC3398))(0, a, b);
	}
	template <typename T = int32_t> static T Summ__3E(int32_t a, int32_t b) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4EC33A4))(0, a, b);
	}
	template <typename T = uintptr_t> static T ToLookup_2m__4D(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E4F09C))(0, element);
	}

};

}
