#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLanternRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLanternRenderer"));
	}

	template <typename T = float> T& MinShowLightDis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MinShowLineDis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MinShowLightDis_Low() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MinShowLineDis_Low() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& BlinkCd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BlinkArgs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& InstanceLine() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& InstanceLightLst() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& lightCloseColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lightEmissionColor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lightEmissionArgs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& lanternMt() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& batchMatrixBuffer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& MaxBatchInstanceCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isLighting() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& currBlinkIdx() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& nextBlinkTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& currCamera() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& cullingGroup() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boundingSpheres() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCullingGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinitCullingGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLightingFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlinkUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBlinkUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLightState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLightState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawInstances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SubmitRenderBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_IsLighting() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194A354))(this);
	}
	template <typename T = void> T set_IsLighting(bool value) {
		return ((T (*)(BRLanternRenderer*, bool))(Il2CppBase() + 0x194A35C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194A448))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194B058))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194B204))(this);
	}
	template <typename T = void> T InitShift() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194AF74))(this);
	}
	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(BRLanternRenderer*, Il2CppVector3))(Il2CppBase() + 0x194B610))(this, shift);
	}
	template <typename T = void> T DoApplyShift(uintptr_t insData, Il2CppVector3 shift) {
		return ((T (*)(BRLanternRenderer*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x194B890))(this, insData, shift);
	}
	template <typename T = void> T InitCullingGroup(uintptr_t camera) {
		return ((T (*)(BRLanternRenderer*, uintptr_t))(Il2CppBase() + 0x194A90C))(this, camera);
	}
	template <typename T = void> T FinitCullingGroup() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194B144))(this);
	}
	template <typename T = void> T CheckLightingFlag() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194ADD8))(this);
	}
	template <typename T = void> T BlinkUpdate() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194B2BC))(this);
	}
	template <typename T = void> T DoBlinkUpdate() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194BA48))(this);
	}
	template <typename T = void> T RefreshLightState() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194A364))(this);
	}
	template <typename T = void> T SetLightState(int32_t idx, bool isLighting) {
		return ((T (*)(BRLanternRenderer*, int32_t, bool))(Il2CppBase() + 0x194BB70))(this, idx, isLighting);
	}
	template <typename T = void> T DrawUpdate() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194B43C))(this);
	}
	template <typename T = void> T DrawInstances(uintptr_t insData, bool isLine, int32_t disIdx) {
		return ((T (*)(BRLanternRenderer*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x194BD5C))(this, insData, isLine, disIdx);
	}
	template <typename T = void> T SubmitRenderBatch(uintptr_t insData, int32_t bufferCount) {
		return ((T (*)(BRLanternRenderer*, uintptr_t, int32_t))(Il2CppBase() + 0x194C35C))(this, insData, bufferCount);
	}
	template <typename T = uintptr_t> T GetCurrentCamera() {
		return ((T (*)(BRLanternRenderer*))(Il2CppBase() + 0x194A790))(this);
	}

};

}
