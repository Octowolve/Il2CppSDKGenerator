#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmTemplateControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmTemplateControl"));
	}

	template <typename T = uintptr_t> T& fsmTemplate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fsmVarOverrides() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& runFsm() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(FsmTemplateControl*))(Il2CppBase() + 0x2F16150))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(FsmTemplateControl*, int32_t))(Il2CppBase() + 0x2EF466C))(this, value);
	}
	template <typename T = uintptr_t> T get_RunFsm() {
		return ((T (*)(FsmTemplateControl*))(Il2CppBase() + 0x2F16158))(this);
	}
	template <typename T = void> T set_RunFsm(uintptr_t value) {
		return ((T (*)(FsmTemplateControl*, uintptr_t))(Il2CppBase() + 0x2F16160))(this, value);
	}
	template <typename T = void> T SetFsmTemplate(uintptr_t template) {
		return ((T (*)(FsmTemplateControl*, uintptr_t))(Il2CppBase() + 0x2F16398))(this, template);
	}
	template <typename T = uintptr_t> T InstantiateFsm() {
		return ((T (*)(FsmTemplateControl*))(Il2CppBase() + 0x2EF4578))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CopyOverrides(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F16224))(0, source);
	}
	template <typename T = void> T ClearOverrides() {
		return ((T (*)(FsmTemplateControl*))(Il2CppBase() + 0x2F163B8))(this);
	}
	template <typename T = void> T UpdateOverrides() {
		return ((T (*)(FsmTemplateControl*))(Il2CppBase() + 0x2F1644C))(this);
	}
	template <typename T = void> T UpdateValues() {
		return ((T (*)(FsmTemplateControl*))(Il2CppBase() + 0x2F16C24))(this);
	}
	template <typename T = void> T ApplyOverrides(uintptr_t overrideFsm) {
		return ((T (*)(FsmTemplateControl*, uintptr_t))(Il2CppBase() + 0x2F167C4))(this, overrideFsm);
	}

};

}
