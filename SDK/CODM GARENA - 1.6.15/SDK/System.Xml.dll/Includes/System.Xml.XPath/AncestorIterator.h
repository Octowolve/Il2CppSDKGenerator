#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class AncestorIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "AncestorIterator"));
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
		return ((T (*)(AncestorIterator*))(Il2CppBase() + 0x4D00E90))(this);
	}
	template <typename T = void> T CollectResults() {
		return ((T (*)(AncestorIterator*))(Il2CppBase() + 0x4D00F20))(this);
	}
	template <typename T = bool> T MoveNextCore() {
		return ((T (*)(AncestorIterator*))(Il2CppBase() + 0x4D0107C))(this);
	}
	template <typename T = bool> T get_ReverseAxis() {
		return ((T (*)(AncestorIterator*))(Il2CppBase() + 0x4D01178))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(AncestorIterator*))(Il2CppBase() + 0x4D01180))(this);
	}

};

}
