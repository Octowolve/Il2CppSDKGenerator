#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class FtueInGameIntroduceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "FtueInGameIntroduceController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ClickCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFullBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TypewriterHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF2CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF370))(this);
	}
	template <typename T = void> T SetClickCallback(uintptr_t callback) {
		return ((T (*)(FtueInGameIntroduceController*, uintptr_t))(Il2CppBase() + 0x4AFF6FC))(this, callback);
	}
	template <typename T = void> T OnFullBtnClick() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF7A4))(this);
	}
	template <typename T = void> T TypewriterHandler() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF574))(this);
	}
	template <typename T = void> T TypewriterHandlerm__0() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF890))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF94C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FtueInGameIntroduceController*))(Il2CppBase() + 0x4AFF954))(this);
	}

};

}
