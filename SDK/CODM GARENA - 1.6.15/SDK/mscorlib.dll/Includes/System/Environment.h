#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Environment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Environment"));
	}

	template <typename T = int32_t> static T& mono_corlib_version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& os() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T get_SocketSecurityEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD668))(0);
	}
	template <typename T = bool> static T get_UnityWebSecurityEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD66C))(0);
	}
	template <typename T = Il2CppString*> static T get_NewLine() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD670))(0);
	}
	template <typename T = uintptr_t> static T get_Platform() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD674))(0);
	}
	template <typename T = Il2CppString*> static T GetOSVersionString() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD678))(0);
	}
	template <typename T = uintptr_t> static T get_OSVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD67C))(0);
	}
	template <typename T = Il2CppString*> static T get_StackTrace() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD774))(0);
	}
	template <typename T = int32_t> static T get_TickCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD82C))(0);
	}
	template <typename T = Il2CppString*> static T get_UserName() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD830))(0);
	}
	template <typename T = uintptr_t> static T get_Version() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCD834))(0);
	}
	template <typename T = Il2CppString*> static T ExpandEnvironmentVariables(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FCD8D4))(0, name);
	}
	template <typename T = Il2CppString*> static T internalGetEnvironmentVariable(Il2CppString* variable) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FCDDC4))(0, variable);
	}
	template <typename T = Il2CppString*> static T GetEnvironmentVariable(Il2CppString* variable) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FCDC00))(0, variable);
	}
	template <typename T = uintptr_t> static T GetEnvironmentVariablesNoCase() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCDC28))(0);
	}
	template <typename T = uintptr_t> static T GetEnvironmentVariables() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCDDD0))(0);
	}
	template <typename T = Il2CppString*> static T GetWindowsFolderPath(int32_t folder) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FCDED4))(0, folder);
	}
	template <typename T = Il2CppString*> static T GetFolderPath(uintptr_t folder) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FCDEDC))(0, folder);
	}
	template <typename T = Il2CppString*> static T ReadXdgUserDir(Il2CppString* config_dir, Il2CppString* home_dir, Il2CppString* key, Il2CppString* fallback) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FCE3E0))(0, config_dir, home_dir, key, fallback);
	}
	template <typename T = Il2CppString*> static T InternalGetFolderPath(uintptr_t folder) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FCDF0C))(0, folder);
	}
	template <typename T = Il2CppString*> static T GetEnvironmentVariable_1(Il2CppString* variable, uintptr_t target) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FCF070))(0, variable, target);
	}
	template <typename T = int32_t> static T get_ProcessorCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCF53C))(0);
	}
	template <typename T = bool> static T get_IsRunningOnWindows() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCDC08))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetEnvironmentVariableNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCDDCC))(0);
	}
	template <typename T = Il2CppString*> static T GetMachineConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCF540))(0);
	}
	template <typename T = Il2CppString*> static T internalGetHome() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCF06C))(0);
	}

};

}
