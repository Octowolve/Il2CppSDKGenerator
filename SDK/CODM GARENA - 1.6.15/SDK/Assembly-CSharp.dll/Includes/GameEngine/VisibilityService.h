#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VisibilityService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VisibilityService"));
	}

	template <typename T = float> T& m_ocZbias() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_ocCullStaticBatchedRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_UseCfmOcMethodIfDoOc() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = float> T& m_TimeOfKeepingRendererVisible() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& debugObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_bActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_CurSOCPath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_bDirty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Camera() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_TemporaryState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVisibilityService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownVisibilityService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDebugObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkDirty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToogleSOCZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleCullStaticBatchedRenders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StartVisibilityService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTemporarySOCState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTemporarySOCState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = float> T get_OcZbias() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E90E94))(this);
	}
	template <typename T = void> T set_OcZbias(float value) {
		return ((T (*)(VisibilityService*, float))(Il2CppBase() + 0x2E90E9C))(this, value);
	}
	template <typename T = bool> T get_UseCfmOcMethodIfDoOc() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E90EA4))(this);
	}
	template <typename T = void> T set_UseCfmOcMethodIfDoOc(bool value) {
		return ((T (*)(VisibilityService*, bool))(Il2CppBase() + 0x2E90EAC))(this, value);
	}
	template <typename T = float> T get_TimeOfKeepingRendererVisible() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E90EB4))(this);
	}
	template <typename T = void> T set_TimeOfKeepingRendererVisible(float value) {
		return ((T (*)(VisibilityService*, float))(Il2CppBase() + 0x2E90EBC))(this, value);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E90EC4))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(VisibilityService*, bool))(Il2CppBase() + 0x2E90ECC))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E90ED4))(this);
	}
	template <typename T = void> T StartVisibilityService(Il2CppString* SOCDataPath) {
		return ((T (*)(VisibilityService*, Il2CppString*))(Il2CppBase() + 0x2E9104C))(this, SOCDataPath);
	}
	template <typename T = void> T ShutdownVisibilityService() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E9146C))(this);
	}
	template <typename T = void> T CheckCamera() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E91538))(this);
	}
	template <typename T = void> T CheckDebugObj() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E9174C))(this);
	}
	template <typename T = void> T MarkDirty() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E917E4))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(VisibilityService*, float))(Il2CppBase() + 0x2E91888))(this, DeltaTime);
	}
	template <typename T = bool> T ToogleSOCZ() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E919AC))(this);
	}
	template <typename T = void> T ToggleCullStaticBatchedRenders() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E91B54))(this);
	}
	template <typename T = void> T StartVisibilityService_1(uintptr_t ocMethod, Il2CppString* ocDataPath) {
		return ((T (*)(VisibilityService*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E91C50))(this, ocMethod, ocDataPath);
	}
	template <typename T = bool> T GetTemporarySOCState() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E920C0))(this);
	}
	template <typename T = void> T SetTemporarySOCState(bool isEnable) {
		return ((T (*)(VisibilityService*, bool))(Il2CppBase() + 0x2E92168))(this, isEnable);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VisibilityService*))(Il2CppBase() + 0x2E922DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VisibilityService*, float))(Il2CppBase() + 0x2E922E4))(this, P0);
	}

};

}
