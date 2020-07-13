#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LiveOpsDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LiveOpsDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_LiveOpsDescList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLiveOpsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginToPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeZoneLiveOps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLiveOpsIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetData(uintptr_t res) {
		return ((T (*)(LiveOpsDataStore*, uintptr_t))(Il2CppBase() + 0x432B128))(this, res);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetLiveOpsData() {
		return ((T (*)(LiveOpsDataStore*))(Il2CppBase() + 0x432C118))(this);
	}
	template <typename T = bool> T LoginToPopup() {
		return ((T (*)(LiveOpsDataStore*))(Il2CppBase() + 0x432C1B8))(this);
	}
	template <typename T = uintptr_t> T GetTimeZoneLiveOps() {
		return ((T (*)(LiveOpsDataStore*))(Il2CppBase() + 0x432C52C))(this);
	}
	template <typename T = bool> T ShowLiveOpsIcon(uintptr_t bonus, uintptr_t type) {
		return ((T (*)(LiveOpsDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x432C8BC))(this, bonus, type);
	}

};

}
