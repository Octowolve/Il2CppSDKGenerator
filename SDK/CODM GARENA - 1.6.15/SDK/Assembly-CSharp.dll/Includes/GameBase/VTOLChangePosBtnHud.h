#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLChangePosBtnHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLChangePosBtnHud"));
	}

	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ChangePosBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& m_VTOLActorID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangePosBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uint32_t VTOLActorID) {
		return ((T (*)(VTOLChangePosBtnHud*, uint32_t))(Il2CppBase() + 0x1BE752C))(this, VTOLActorID);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE763C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE76D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE781C))(this);
	}
	template <typename T = void> T OnChangePosBtnClick() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE7964))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(VTOLChangePosBtnHud*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1BE7DC4))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(VTOLChangePosBtnHud*, uintptr_t))(Il2CppBase() + 0x1BE7F9C))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE80D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE80E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VTOLChangePosBtnHud*))(Il2CppBase() + 0x1BE80E8))(this);
	}

};

}
