#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZmEndlessSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZmEndlessSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScreenFixedPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x2986E58))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x2986EFC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x2987008))(this);
	}
	template <typename T = bool> T IsScreenFixedPic() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x29874CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x298756C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x2987574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x298757C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsScreenFixedPic() {
		return ((T (*)(ZmEndlessSettlementWindowController*))(Il2CppBase() + 0x2987584))(this);
	}

};

}
