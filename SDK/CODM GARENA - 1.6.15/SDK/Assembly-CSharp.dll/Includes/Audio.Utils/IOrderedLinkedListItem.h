#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class IOrderedLinkedListItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "IOrderedLinkedListItem"));
	}


	template <typename T = bool> T IsGreaterThan(uintptr_t pNextItem) {
		return ((T (*)(IOrderedLinkedListItem*, uintptr_t))(Il2CppBase() + 0x0))(this, pNextItem);
	}
	template <typename T = Il2CppString*> T GetStringPresentation() {
		return ((T (*)(IOrderedLinkedListItem*))(Il2CppBase() + 0x0))(this);
	}

};

}
