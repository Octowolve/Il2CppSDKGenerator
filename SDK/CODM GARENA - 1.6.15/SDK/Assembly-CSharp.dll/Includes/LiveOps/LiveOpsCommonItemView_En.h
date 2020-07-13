#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsCommonItemViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsCommonItemView_En"));
	}

	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ItemTemplate_2() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mLiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetData(int32_t Id, int32_t Num, int32_t Durable) {
		return ((T (*)(LiveOpsCommonItemViewEn*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x34E1C14))(this, Id, Num, Durable);
	}
	template <typename T = void> T SetData_2(int32_t Id, int32_t Num, int32_t Durable) {
		return ((T (*)(LiveOpsCommonItemViewEn*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x34E1D74))(this, Id, Num, Durable);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LiveOpsCommonItemViewEn*))(Il2CppBase() + 0x34E1EC4))(this);
	}
	template <typename T = void> T GoToDetails(uintptr_t Obj) {
		return ((T (*)(LiveOpsCommonItemViewEn*, uintptr_t))(Il2CppBase() + 0x34E2078))(this, Obj);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LiveOpsCommonItemViewEn*))(Il2CppBase() + 0x34E21B0))(this);
	}

};

}
