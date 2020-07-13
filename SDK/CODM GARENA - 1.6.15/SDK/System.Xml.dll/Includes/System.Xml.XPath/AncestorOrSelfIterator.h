#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class AncestorOrSelfIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "AncestorOrSelfIterator"));
	}

	template <typename T = int32_t> T& currentPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& navigators() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AncestorOrSelfIterator*))(Il2CppBase() + 0x4D01300))(this);
	}
	template <typename T = void> T CollectResults() {
		return ((T (*)(AncestorOrSelfIterator*))(Il2CppBase() + 0x4D01390))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(AncestorOrSelfIterator*))(Il2CppBase() + 0x4D01500))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(AncestorOrSelfIterator*))(Il2CppBase() + 0x4D0165C))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(AncestorOrSelfIterator*))(Il2CppBase() + 0x4D01664))(this);
	}

};

}
