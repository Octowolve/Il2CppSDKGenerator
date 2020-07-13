#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FreeViewOBController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FreeViewOBController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_FreeViewSpot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> static T& HighLightNodeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectCam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HighLightButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCamViewBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470E6C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470E768))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470EA6C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470EBA0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470ECBC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470EFB0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F058))(this);
	}
	template <typename T = void> T OnPackBtnClick() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F138))(this);
	}
	template <typename T = void> T SelectCam(uint32_t index) {
		return ((T (*)(FreeViewOBController*, uint32_t))(Il2CppBase() + 0x470F1F0))(this, index);
	}
	template <typename T = void> T HighLightButton(uintptr_t button, bool highLighted) {
		return ((T (*)(FreeViewOBController*, uintptr_t, bool))(Il2CppBase() + 0x470F56C))(this, button, highLighted);
	}
	template <typename T = void> T OnCamViewBtnClick(uintptr_t sender) {
		return ((T (*)(FreeViewOBController*, uintptr_t))(Il2CppBase() + 0x470F7C8))(this, sender);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F970))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(FreeViewOBController*))(Il2CppBase() + 0x470F978))(this);
	}

};

}
