#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PerkFeedbackWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PerkFeedbackWrapper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& itemLifeTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& itemFadeInTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& itemFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& cdTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& ITEM_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetWorldPositions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& inActiveQueue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& activeQueue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& lastIconName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lastPlayTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFeedbackItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PerkFeedbackWrapper*))(Il2CppBase() + 0x16DA74C))(this);
	}
	template <typename T = void> T PlayFeedback(Il2CppString* iconName) {
		return ((T (*)(PerkFeedbackWrapper*, Il2CppString*))(Il2CppBase() + 0x16D97D8))(this, iconName);
	}
	template <typename T = void> T OnItemPlayFinished(uintptr_t item) {
		return ((T (*)(PerkFeedbackWrapper*, uintptr_t))(Il2CppBase() + 0x16DA2A0))(this, item);
	}
	template <typename T = uintptr_t> T GetFeedbackItem() {
		return ((T (*)(PerkFeedbackWrapper*))(Il2CppBase() + 0x16DA950))(this);
	}

};

}
