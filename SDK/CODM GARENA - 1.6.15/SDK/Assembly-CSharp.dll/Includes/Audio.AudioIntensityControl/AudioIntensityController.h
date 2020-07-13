#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.AudioIntensityControl {

class AudioIntensityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.AudioIntensityControl", "AudioIntensityController"));
	}

	template <typename T = uintptr_t> T& mConfig() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& mDictRTPCs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& mListRTPCKeys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mLastCheckTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> static T& kDetectSpan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& msInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyEventTriggered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__NotifyEventTriggered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__AddRTPCIfNonExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__IncRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x44D0DA8))(0);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x44D1108))(0);
	}
	template <typename T = void> static T Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x44D13E8))(0);
	}
	template <typename T = void> static T NotifyEventTriggered(Il2CppString* strEvent, Il2CppVector3 vecPos) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x44D17F0))(0, strEvent, vecPos);
	}
	template <typename T = void> T _Init() {
		return ((T (*)(AudioIntensityController*))(Il2CppBase() + 0x44D0FC0))(this);
	}
	template <typename T = void> T _Term() {
		return ((T (*)(AudioIntensityController*))(Il2CppBase() + 0x44D1314))(this);
	}
	template <typename T = void> T _Tick() {
		return ((T (*)(AudioIntensityController*))(Il2CppBase() + 0x44D1544))(this);
	}
	template <typename T = void> T _NotifyEventTriggered(Il2CppString* strEventName, Il2CppVector3 vecPos) {
		return ((T (*)(AudioIntensityController*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x44D1988))(this, strEventName, vecPos);
	}
	template <typename T = void> T _AddRTPCIfNonExist(Il2CppString* strRTPC) {
		return ((T (*)(AudioIntensityController*, Il2CppString*))(Il2CppBase() + 0x44D2194))(this, strRTPC);
	}
	template <typename T = void> T _IncRTPC(Il2CppString* strRTPC) {
		return ((T (*)(AudioIntensityController*, Il2CppString*))(Il2CppBase() + 0x44D2448))(this, strRTPC);
	}

};

}
