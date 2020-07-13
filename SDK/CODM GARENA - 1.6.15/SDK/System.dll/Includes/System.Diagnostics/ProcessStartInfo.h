#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class ProcessStartInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "ProcessStartInfo"));
	}

	template <typename T = Il2CppString*> T& arguments() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& error_dialog_parent_handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& filename() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& verb() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& working_directory() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& envVars() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& create_no_window() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& error_dialog() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& redirect_standard_error() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& redirect_standard_input() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = bool> T& redirect_standard_output() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& use_shell_execute() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& encoding_stderr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& encoding_stdout() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& username() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& domain() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& password() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& load_user_profile() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Arguments() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA08))(this);
	}
	template <typename T = void> T set_Arguments(Il2CppString* value) {
		return ((T (*)(ProcessStartInfo*, Il2CppString*))(Il2CppBase() + 0x42AFA34))(this, value);
	}
	template <typename T = void> T set_CreateNoWindow(bool value) {
		return ((T (*)(ProcessStartInfo*, bool))(Il2CppBase() + 0x42AFA3C))(this, value);
	}
	template <typename T = uintptr_t> T get_EnvironmentVariables() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AE358))(this);
	}
	template <typename T = bool> T get_HaveEnvVars() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AD2E4))(this);
	}
	template <typename T = void> T set_ErrorDialog(bool value) {
		return ((T (*)(ProcessStartInfo*, bool))(Il2CppBase() + 0x42AFA44))(this, value);
	}
	template <typename T = Il2CppString*> T get_FileName() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA00))(this);
	}
	template <typename T = void> T set_FileName(Il2CppString* value) {
		return ((T (*)(ProcessStartInfo*, Il2CppString*))(Il2CppBase() + 0x42AFA4C))(this, value);
	}
	template <typename T = bool> T get_RedirectStandardError() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AD2DC))(this);
	}
	template <typename T = void> T set_RedirectStandardError(bool value) {
		return ((T (*)(ProcessStartInfo*, bool))(Il2CppBase() + 0x42AFA54))(this, value);
	}
	template <typename T = bool> T get_RedirectStandardInput() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AD2CC))(this);
	}
	template <typename T = void> T set_RedirectStandardInput(bool value) {
		return ((T (*)(ProcessStartInfo*, bool))(Il2CppBase() + 0x42AFA5C))(this, value);
	}
	template <typename T = bool> T get_RedirectStandardOutput() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AD2D4))(this);
	}
	template <typename T = void> T set_RedirectStandardOutput(bool value) {
		return ((T (*)(ProcessStartInfo*, bool))(Il2CppBase() + 0x42AFA64))(this, value);
	}
	template <typename T = uintptr_t> T get_StandardErrorEncoding() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA48))(this);
	}
	template <typename T = uintptr_t> T get_StandardOutputEncoding() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA40))(this);
	}
	template <typename T = bool> T get_UseShellExecute() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEC84))(this);
	}
	template <typename T = void> T set_UseShellExecute(bool value) {
		return ((T (*)(ProcessStartInfo*, bool))(Il2CppBase() + 0x42AFA6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_WorkingDirectory() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA10))(this);
	}
	template <typename T = bool> T get_LoadUserProfile() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA68))(this);
	}
	template <typename T = Il2CppString*> T get_UserName() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA50))(this);
	}
	template <typename T = Il2CppString*> T get_Domain() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA58))(this);
	}
	template <typename T = uintptr_t> T get_Password() {
		return ((T (*)(ProcessStartInfo*))(Il2CppBase() + 0x42AEA60))(this);
	}

};

}
