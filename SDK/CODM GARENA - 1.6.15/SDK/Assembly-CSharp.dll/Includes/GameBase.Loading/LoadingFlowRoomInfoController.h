#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowRoomInfoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowRoomInfoController"));
	}

	template <typename T = bool> T& m_MsgFinish() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_RelationTeamPreloadAssets() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRelationTeamPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetsLoadFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRelationTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E64A3C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E64B00))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E64C28))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E64CE4))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E64D84))(this);
	}
	template <typename T = void> T OnResRoomInfo(uintptr_t msg) {
		return ((T (*)(LoadingFlowRoomInfoController*, uintptr_t))(Il2CppBase() + 0x2E64F9C))(this, msg);
	}
	template <typename T = void> T CheckFlowFinish() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E65050))(this);
	}
	template <typename T = void> T DoRelationTeamPreloadAssets() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E64EE0))(this);
	}
	template <typename T = void> T OnAssetsLoadFinish(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(LoadingFlowRoomInfoController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2E65664))(this, id, obj);
	}
	template <typename T = bool> T CheckRelationTeam() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E65120))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetLoadingTips() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E65730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E65734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E6573C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfStopOnError() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E65744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowRoomInfoController*))(Il2CppBase() + 0x2E65748))(this);
	}

};

}
