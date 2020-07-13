#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class AnimationSpeedConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "AnimationSpeedConfConfig"));
	}

	template <typename T = Il2CppString*> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& TPMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SprintClipTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SprintScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MoveClipTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MoveScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& AimmingIdleClipTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& AimmingScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& ProneClipTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ProneScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CrouchClipTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& CrouchScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CrouchSprintClipTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& CrouchSprintScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T GetClipTime(uintptr_t type) {
		return ((T (*)(AnimationSpeedConfConfig*, uintptr_t))(Il2CppBase() + 0x2D3DE74))(this, type);
	}
	template <typename T = float> T GetScale(uintptr_t type) {
		return ((T (*)(AnimationSpeedConfConfig*, uintptr_t))(Il2CppBase() + 0x2D3E004))(this, type);
	}
	template <typename T = float> T CalcClipTime(uintptr_t aniClipNameType, float scale) {
		return ((T (*)(AnimationSpeedConfConfig*, uintptr_t, float))(Il2CppBase() + 0x2D3E198))(this, aniClipNameType, scale);
	}
	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E35C))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponCategory() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E3FC))(this);
	}
	template <typename T = void> T set_WeaponCategory(Il2CppString* value) {
		return ((T (*)(AnimationSpeedConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D3E404))(this, value);
	}
	template <typename T = int32_t> T get_TPMode() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E40C))(this);
	}
	template <typename T = void> T set_TPMode(int32_t value) {
		return ((T (*)(AnimationSpeedConfConfig*, int32_t))(Il2CppBase() + 0x2D3E414))(this, value);
	}
	template <typename T = float> T get_SprintClipTime() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3DFDC))(this);
	}
	template <typename T = void> T set_SprintClipTime(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E41C))(this, value);
	}
	template <typename T = float> T get_SprintScale() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E170))(this);
	}
	template <typename T = void> T set_SprintScale(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E424))(this, value);
	}
	template <typename T = float> T get_MoveClipTime() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3DFE4))(this);
	}
	template <typename T = void> T set_MoveClipTime(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E42C))(this, value);
	}
	template <typename T = int32_t> T get_MoveScale() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E178))(this);
	}
	template <typename T = void> T set_MoveScale(int32_t value) {
		return ((T (*)(AnimationSpeedConfConfig*, int32_t))(Il2CppBase() + 0x2D3E434))(this, value);
	}
	template <typename T = int32_t> T get_AimmingIdleClipTime() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E43C))(this);
	}
	template <typename T = void> T set_AimmingIdleClipTime(int32_t value) {
		return ((T (*)(AnimationSpeedConfConfig*, int32_t))(Il2CppBase() + 0x2D3E444))(this, value);
	}
	template <typename T = float> T get_AimmingScale() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E44C))(this);
	}
	template <typename T = void> T set_AimmingScale(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E454))(this, value);
	}
	template <typename T = float> T get_ProneClipTime() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3DFEC))(this);
	}
	template <typename T = void> T set_ProneClipTime(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E45C))(this, value);
	}
	template <typename T = float> T get_ProneScale() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E180))(this);
	}
	template <typename T = void> T set_ProneScale(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E464))(this, value);
	}
	template <typename T = float> T get_CrouchClipTime() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3DFF4))(this);
	}
	template <typename T = void> T set_CrouchClipTime(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E46C))(this, value);
	}
	template <typename T = float> T get_CrouchScale() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E188))(this);
	}
	template <typename T = void> T set_CrouchScale(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E474))(this, value);
	}
	template <typename T = float> T get_CrouchSprintClipTime() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3DFFC))(this);
	}
	template <typename T = void> T set_CrouchSprintClipTime(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E47C))(this, value);
	}
	template <typename T = float> T get_CrouchSprintScale() {
		return ((T (*)(AnimationSpeedConfConfig*))(Il2CppBase() + 0x2D3E190))(this);
	}
	template <typename T = void> T set_CrouchSprintScale(float value) {
		return ((T (*)(AnimationSpeedConfConfig*, float))(Il2CppBase() + 0x2D3E484))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AnimationSpeedConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D3E48C))(this, bytes, position);
	}

};

}
