#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class TimiAudioLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "TimiAudioLogger"));
	}

	template <typename T = uintptr_t> T& LogLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> static T& EnableWwiseLogging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& msInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogTrace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogEditorError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PromptDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogVerbose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LogVerbose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LogTrace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LogWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> static T LogTrace(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3248760))(0, strValue, args);
	}
	template <typename T = void> static T LogError(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3247E7C))(0, strValue, args);
	}
	template <typename T = void> static T LogEditorError(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3248C98))(0, strValue, args);
	}
	template <typename T = void> static T LogPrivate(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3248D68))(0, strValue, args);
	}
	template <typename T = void> static T PromptDialog(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3248E38))(0, strValue, args);
	}
	template <typename T = void> static T LogWarning(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3248F08))(0, strValue, args);
	}
	template <typename T = void> static T LogVerbose(Il2CppString* strValue, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3249214))(0, strValue, args);
	}
	template <typename T = void> T _LogVerbose(Il2CppString* strValue) {
		return ((T (*)(TimiAudioLogger*, Il2CppString*))(Il2CppBase() + 0x3249404))(this, strValue);
	}
	template <typename T = void> T _LogTrace(Il2CppString* strValue) {
		return ((T (*)(TimiAudioLogger*, Il2CppString*))(Il2CppBase() + 0x3248AAC))(this, strValue);
	}
	template <typename T = void> T _LogWarning(Il2CppString* strValue) {
		return ((T (*)(TimiAudioLogger*, Il2CppString*))(Il2CppBase() + 0x32490F8))(this, strValue);
	}
	template <typename T = void> T _LogError(Il2CppString* strValue) {
		return ((T (*)(TimiAudioLogger*, Il2CppString*))(Il2CppBase() + 0x3248B7C))(this, strValue);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3248950))(0);
	}

};

}
