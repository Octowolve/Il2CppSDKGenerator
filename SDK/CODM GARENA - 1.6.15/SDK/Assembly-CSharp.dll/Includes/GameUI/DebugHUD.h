#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DebugHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DebugHUD"));
	}

	template <typename T = uintptr_t> T& OC() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Stats() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LocalPos() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MoveSpeed() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_FPS() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_TargetFPS() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_CheckFPSFrame() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_LastFrame() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_LastTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampForDebugHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBatches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTris() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVisibleDynamicMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFootPrint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUsedTextureCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E404C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E4054))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(DebugHUD*, float))(Il2CppBase() + 0x46E41D0))(this, dt);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampForDebugHUD() {
		return ((T (*)(void *))(Il2CppBase() + 0x46E5C38))(0);
	}
	template <typename T = int32_t> T GetFPS() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E5B10))(this);
	}
	template <typename T = int32_t> T GetBatches() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E57E8))(this);
	}
	template <typename T = int32_t> T GetTris() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E59CC))(this);
	}
	template <typename T = int32_t> T GetVisibleDynamicMesh() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E5D60))(this);
	}
	template <typename T = int32_t> T GetFootPrint() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E592C))(this);
	}
	template <typename T = int32_t> T GetUsedTextureCount() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E5EA4))(this);
	}
	template <typename T = int32_t> T GetRenderTime() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E5FE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DebugHUD*))(Il2CppBase() + 0x46E6198))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DebugHUD*, float))(Il2CppBase() + 0x46E61A0))(this, P0);
	}

};

}
