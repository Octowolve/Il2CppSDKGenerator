#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SeasonShowTimeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SeasonShowTimeController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mPVPLadderDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBRLadderDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mGlobalDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastSeasonData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentBrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4483EE0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4483F84))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4484134))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x44843B8))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x448425C))(this);
	}
	template <typename T = void> T SetLastSeasonData() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4484700))(this);
	}
	template <typename T = void> T SetCurrentMpData() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4484AF4))(this);
	}
	template <typename T = void> T SetCurrentBrData() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x44856AC))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4486528))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4486634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x448663C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x4486644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SeasonShowTimeController*))(Il2CppBase() + 0x448664C))(this);
	}

};

}
