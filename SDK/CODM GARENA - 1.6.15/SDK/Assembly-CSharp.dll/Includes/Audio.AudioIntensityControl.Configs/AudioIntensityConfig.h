#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioIntensityControl.Configs {

class AudioIntensityConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioIntensityControl.Configs", "AudioIntensityConfig"));
	}

	template <typename T = int32_t> T& TireCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mDictRegisteredEvents() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& mDictIgnoredEvents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mOtherRegist() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AddRegisteredEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___AddRegisteredEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AddIgnoredEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___AddIgnoredEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T LoadConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x44D1C60))(0);
	}
	template <typename T = uintptr_t> T GetRTPC(Il2CppString* strEvent) {
		return ((T (*)(AudioIntensityConfig*, Il2CppString*))(Il2CppBase() + 0x44D1D98))(this, strEvent);
	}
	template <typename T = void> T Load(uintptr_t pData) {
		return ((T (*)(AudioIntensityConfig*, uintptr_t))(Il2CppBase() + 0x44D28C0))(this, pData);
	}
	template <typename T = void> T _AddRegisteredEvents(Il2CppArray<uintptr_t>* strEvents, Il2CppString* strRTPC, float fDetectRange) {
		return ((T (*)(AudioIntensityConfig*, Il2CppArray<uintptr_t>*, Il2CppString*, float))(Il2CppBase() + 0x44D2ACC))(this, strEvents, strRTPC, fDetectRange);
	}
	template <typename T = void> T __AddRegisteredEvent(Il2CppString* strEvent, Il2CppString* strRTPC, float fDetectRange) {
		return ((T (*)(AudioIntensityConfig*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x44D2D7C))(this, strEvent, strRTPC, fDetectRange);
	}
	template <typename T = void> T _AddIgnoredEvents(Il2CppArray<uintptr_t>* strEvents, Il2CppString* strRTPC) {
		return ((T (*)(AudioIntensityConfig*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x44D2C2C))(this, strEvents, strRTPC);
	}
	template <typename T = void> T __AddIgnoredEvent(Il2CppString* strEvent, Il2CppString* strRTPC) {
		return ((T (*)(AudioIntensityConfig*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44D2F04))(this, strEvent, strRTPC);
	}

};

}
