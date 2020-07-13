#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class NewGuideInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "NewGuideInterface"));
	}


	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(NewGuideInterface*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(NewGuideInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, itemType);
	}

};

}
