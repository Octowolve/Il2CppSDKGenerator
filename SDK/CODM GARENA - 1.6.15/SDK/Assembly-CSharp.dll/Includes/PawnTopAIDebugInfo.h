#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PawnTopAIDebugInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PawnTopAIDebugInfo"));
	}

	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& Nearest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Furthest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FurthestScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& OcclusionAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_RaycastIntv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& FixedHeadNameOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bStayInScreen() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_ownerTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_fadeOutStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_isFadeOut() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoingFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNameLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientDebugContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(PawnTopAIDebugInfo*, uintptr_t))(Il2CppBase() + 0x3F05FC4))(this, owner);
	}
	template <typename T = void> T InitBR(uintptr_t owner) {
		return ((T (*)(PawnTopAIDebugInfo*, uintptr_t))(Il2CppBase() + 0x3F06064))(this, owner);
	}
	template <typename T = void> T ResetInfo() {
		return ((T (*)(PawnTopAIDebugInfo*))(Il2CppBase() + 0x3F06264))(this);
	}
	template <typename T = void> T UpdateUI(float dt, uintptr_t worldCam, uintptr_t uiCam) {
		return ((T (*)(PawnTopAIDebugInfo*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F06378))(this, dt, worldCam, uiCam);
	}
	template <typename T = void> T OnFadeout() {
		return ((T (*)(PawnTopAIDebugInfo*))(Il2CppBase() + 0x3F06D7C))(this);
	}
	template <typename T = void> T DoingFadeout() {
		return ((T (*)(PawnTopAIDebugInfo*))(Il2CppBase() + 0x3F06E74))(this);
	}
	template <typename T = void> T EndFadeout() {
		return ((T (*)(PawnTopAIDebugInfo*))(Il2CppBase() + 0x3F06FCC))(this);
	}
	template <typename T = void> T SetNameLabel(Il2CppString* serverContent) {
		return ((T (*)(PawnTopAIDebugInfo*, Il2CppString*))(Il2CppBase() + 0x3F07070))(this, serverContent);
	}
	template <typename T = Il2CppString*> T GetClientDebugContent() {
		return ((T (*)(PawnTopAIDebugInfo*))(Il2CppBase() + 0x3F07190))(this);
	}

};

}
