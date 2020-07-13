#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TutorialHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TutorialHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetL10N() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T GetL10N(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x424BF48))(0, key);
	}
	template <typename T = void> static T ShowMask(uintptr_t Mask, uintptr_t MaskEdge, bool show, uintptr_t target, Il2CppVector2 center, Il2CppVector2 size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x424C098))(0, Mask, MaskEdge, show, target, center, size);
	}
	template <typename T = void> static T ShowSignTips(uintptr_t SignRoot, uintptr_t SignTips, uintptr_t SignBG, uintptr_t TipsArrow, uintptr_t ArrowUpSocket, uintptr_t ArrowDownSocket, uintptr_t ArrowLeftSocket, uintptr_t ArrowRightSocket, bool show, Il2CppString* content, uintptr_t targetParent, uintptr_t oldParent, Il2CppVector3 targetOffset, uintptr_t arrowType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, Il2CppString*, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x424C690))(0, SignRoot, SignTips, SignBG, TipsArrow, ArrowUpSocket, ArrowDownSocket, ArrowLeftSocket, ArrowRightSocket, show, content, targetParent, oldParent, targetOffset, arrowType);
	}

};

}
