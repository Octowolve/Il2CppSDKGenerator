#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CDefaultState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CDefaultState"));
	}

	template <typename T = uintptr_t> static T& gNULL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& playable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& length() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Layer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& clipName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& clipTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& wrapMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& FFinish() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FLayerHide() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> static T get_NULL() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B53900))(0);
	}
	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B53A00))(0);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B00))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(CDefaultState*, int32_t))(Il2CppBase() + 0x2B53B08))(this, value);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B10))(this);
	}
	template <typename T = void> T set_parent(uintptr_t value) {
		return ((T (*)(CDefaultState*, uintptr_t))(Il2CppBase() + 0x2B53B18))(this, value);
	}
	template <typename T = uintptr_t> T get_playable() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B20))(this);
	}
	template <typename T = void> T set_playable(uintptr_t value) {
		return ((T (*)(CDefaultState*, uintptr_t))(Il2CppBase() + 0x2B53B28))(this, value);
	}
	template <typename T = float> T get_time() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B30))(this);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(CDefaultState*, float))(Il2CppBase() + 0x2B53B38))(this, value);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B40))(this);
	}
	template <typename T = void> T set_speed(float value) {
		return ((T (*)(CDefaultState*, float))(Il2CppBase() + 0x2B53B48))(this, value);
	}
	template <typename T = float> T get_length() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B50))(this);
	}
	template <typename T = void> T set_length(float value) {
		return ((T (*)(CDefaultState*, float))(Il2CppBase() + 0x2B53B58))(this, value);
	}
	template <typename T = float> T get_weight() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B60))(this);
	}
	template <typename T = void> T set_weight(float value) {
		return ((T (*)(CDefaultState*, float))(Il2CppBase() + 0x2B53B68))(this, value);
	}
	template <typename T = bool> T get_isPlaying() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B70))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B78))(this);
	}
	template <typename T = bool> T get_Paused() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B80))(this);
	}
	template <typename T = void> T set_Paused(bool value) {
		return ((T (*)(CDefaultState*, bool))(Il2CppBase() + 0x2B53B88))(this, value);
	}
	template <typename T = int32_t> T get_Layer() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B8C))(this);
	}
	template <typename T = void> T set_Layer(int32_t value) {
		return ((T (*)(CDefaultState*, int32_t))(Il2CppBase() + 0x2B53B94))(this, value);
	}
	template <typename T = Il2CppString*> T get_clipName() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53B9C))(this);
	}
	template <typename T = void> T set_clipName(Il2CppString* value) {
		return ((T (*)(CDefaultState*, Il2CppString*))(Il2CppBase() + 0x2B53BA4))(this, value);
	}
	template <typename T = float> T get_clipTime() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53BAC))(this);
	}
	template <typename T = void> T set_clipTime(float value) {
		return ((T (*)(CDefaultState*, float))(Il2CppBase() + 0x2B53BB4))(this, value);
	}
	template <typename T = uintptr_t> T get_wrapMode() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53BBC))(this);
	}
	template <typename T = void> T set_wrapMode(uintptr_t value) {
		return ((T (*)(CDefaultState*, uintptr_t))(Il2CppBase() + 0x2B53BC4))(this, value);
	}
	template <typename T = uintptr_t> T get_FFinish() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53BCC))(this);
	}
	template <typename T = void> T set_FFinish(uintptr_t value) {
		return ((T (*)(CDefaultState*, uintptr_t))(Il2CppBase() + 0x2B53BD4))(this, value);
	}
	template <typename T = uintptr_t> T get_FLayerHide() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53BDC))(this);
	}
	template <typename T = void> T set_FLayerHide(uintptr_t value) {
		return ((T (*)(CDefaultState*, uintptr_t))(Il2CppBase() + 0x2B53BE4))(this, value);
	}
	template <typename T = void> T Play() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53D14))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(CDefaultState*))(Il2CppBase() + 0x2B53E44))(this);
	}
	template <typename T = void> T Stop_1(Il2CppString* name) {
		return ((T (*)(CDefaultState*, Il2CppString*))(Il2CppBase() + 0x2B53F8C))(this, name);
	}
	template <typename T = void> T Update(float delta) {
		return ((T (*)(CDefaultState*, float))(Il2CppBase() + 0x2B540D4))(this, delta);
	}

};

}
