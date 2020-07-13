#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsScrollPlayViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsScrollPlayView_En"));
	}

	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ObjRedPoint() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LiveOpsScrollPlayViewEn*))(Il2CppBase() + 0x4325AC8))(this);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(LiveOpsScrollPlayViewEn*))(Il2CppBase() + 0x4325B78))(this);
	}
	template <typename T = void> T SwitchToView(int32_t index) {
		return ((T (*)(LiveOpsScrollPlayViewEn*, int32_t))(Il2CppBase() + 0x4325CA4))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LiveOpsScrollPlayViewEn*))(Il2CppBase() + 0x43261C4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDataValid() {
		return ((T (*)(LiveOpsScrollPlayViewEn*))(Il2CppBase() + 0x43261CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToView(int32_t P0) {
		return ((T (*)(LiveOpsScrollPlayViewEn*, int32_t))(Il2CppBase() + 0x43261D4))(this, P0);
	}

};

}
