#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsAnnouncementControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsAnnouncementController_CA"));
	}

	template <typename T = uintptr_t> T& m_View_CA() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& LeftDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_bAdaptation() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsAnnouncementControllerCA*))(Il2CppBase() + 0x3567328))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsAnnouncementControllerCA*))(Il2CppBase() + 0x35682F0))(this);
	}
	template <typename T = void> T UpdateView(int32_t inLeftTab) {
		return ((T (*)(LiveOpsAnnouncementControllerCA*, int32_t))(Il2CppBase() + 0x3568394))(this, inLeftTab);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsAnnouncementControllerCA*))(Il2CppBase() + 0x3567544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsAnnouncementControllerCA*))(Il2CppBase() + 0x35689E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsAnnouncementControllerCA*))(Il2CppBase() + 0x35689E4))(this);
	}

};

}
