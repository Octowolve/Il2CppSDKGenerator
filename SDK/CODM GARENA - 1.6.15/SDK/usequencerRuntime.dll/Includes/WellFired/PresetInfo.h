#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class PresetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "PresetInfo"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& CapturePath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UpscaleAmount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FrameRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PresetInfo*))(Il2CppBase() + 0x4858CC8))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(PresetInfo*, Il2CppString*))(Il2CppBase() + 0x4858CA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_CapturePath() {
		return ((T (*)(PresetInfo*))(Il2CppBase() + 0x4858CD0))(this);
	}
	template <typename T = void> T set_CapturePath(Il2CppString* value) {
		return ((T (*)(PresetInfo*, Il2CppString*))(Il2CppBase() + 0x4858CB0))(this, value);
	}
	template <typename T = uintptr_t> T get_UpscaleAmount() {
		return ((T (*)(PresetInfo*))(Il2CppBase() + 0x4858CD8))(this);
	}
	template <typename T = void> T set_UpscaleAmount(uintptr_t value) {
		return ((T (*)(PresetInfo*, uintptr_t))(Il2CppBase() + 0x4858CB8))(this, value);
	}
	template <typename T = uintptr_t> T get_FrameRate() {
		return ((T (*)(PresetInfo*))(Il2CppBase() + 0x4858CE0))(this);
	}
	template <typename T = void> T set_FrameRate(uintptr_t value) {
		return ((T (*)(PresetInfo*, uintptr_t))(Il2CppBase() + 0x4858CC0))(this, value);
	}

};

}
