#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class Check
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "Check"));
	}


	template <typename T = void> static T Source(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4EC28F0))(0, source);
	}
	template <typename T = void> static T SourceAndSelector(uintptr_t source, uintptr_t selector) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC29A4))(0, source, selector);
	}
	template <typename T = void> static T SourceAndPredicate(uintptr_t source, uintptr_t predicate) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2A90))(0, source, predicate);
	}
	template <typename T = void> static T FirstAndSecond(uintptr_t first, uintptr_t second) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2B7C))(0, first, second);
	}
	template <typename T = void> static T SourceAndKeySelector(uintptr_t source, uintptr_t keySelector) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2C68))(0, source, keySelector);
	}
	template <typename T = void> static T SourceAndKeyElementSelectors(uintptr_t source, uintptr_t keySelector, uintptr_t elementSelector) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2D54))(0, source, keySelector, elementSelector);
	}
	template <typename T = void> static T SourceAndCollectionSelectors(uintptr_t source, uintptr_t collectionSelector, uintptr_t selector) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2E78))(0, source, collectionSelector, selector);
	}
	template <typename T = void> static T JoinSelectors(uintptr_t outer, uintptr_t inner, uintptr_t outerKeySelector, uintptr_t innerKeySelector, uintptr_t resultSelector) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4EC2F9C))(0, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
	}

};

}
