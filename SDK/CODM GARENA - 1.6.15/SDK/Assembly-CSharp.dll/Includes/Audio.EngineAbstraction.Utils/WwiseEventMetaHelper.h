#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Utils {

class WwiseEventMetaHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Utils", "WwiseEventMetaHelper"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& msDictStrToLower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> static T& msDictInfosEvtID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<uint32_t, uint32_t>*> static T& msRedirectEvent2Switches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<uint64_t, uint32_t>*> static T& msDictRedirections() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& msInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T get_Inited() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EF288))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E393C))(0);
	}
	template <typename T = float> static T GetEventMaxDuration(Il2CppString* strEventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44EF790))(0, strEventName);
	}
	template <typename T = float> static T GetEventMaxAttenuation(Il2CppString* strEventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44EF9D8))(0, strEventName);
	}
	template <typename T = uintptr_t> static T GetEventInfo(Il2CppString* strEventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44EF848))(0, strEventName);
	}
	template <typename T = uintptr_t> static T GetEventInfoByEventID(uint32_t uEvtID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x44EFC94))(0, uEvtID);
	}
	template <typename T = void> static T GetBanksForEvent(Il2CppString* strEvent, uintptr_t listBankNames) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x44EFDE8))(0, strEvent, listBankNames);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x44EFEE4))(0);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x44E47FC))(0);
	}
	template <typename T = uint32_t> static T GetRedirectedEventSwitch(uint32_t uEvtID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x44F000C))(0, uEvtID);
	}
	template <typename T = uint32_t> static T GetRedirectedEvent(uint32_t uEvtID, uint32_t uSwitchValue) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x44F0158))(0, uEvtID, uSwitchValue);
	}
	template <typename T = void> static T FillInDebugInfo(uintptr_t sbBuffer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44F02BC))(0, sbBuffer);
	}
	template <typename T = void> static T _ParseRedirectInfo(uintptr_t pRedirectInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44EF338))(0, pRedirectInfo);
	}
	template <typename T = Il2CppString*> static T _ToLower(Il2CppString* strName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44F079C))(0, strName);
	}
	template <typename T = uint64_t> static T MakeUInt64(uint32_t a, uint32_t b) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x44F02B4))(0, a, b);
	}

};

}
