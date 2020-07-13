#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class Process
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "Process"));
	}

	template <typename T = uintptr_t> T& process_handle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& pid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& stdout_rd() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& stderr_rd() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& process_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& error_stream() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& input_stream() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& output_stream() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& start_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& async_output() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& async_error() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T StartExitCallbackIfNeeded() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AC554))(this);
	}
	template <typename T = int32_t> static T ExitCode_internal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42AC558))(0, handle);
	}
	template <typename T = int32_t> T get_ExitCode() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AC560))(this);
	}
	template <typename T = uintptr_t> T get_Handle() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AC688))(this);
	}
	template <typename T = bool> T get_HasExited() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AC690))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AC798))(this);
	}
	template <typename T = Il2CppString*> static T ProcessName_internal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42AC850))(0, handle);
	}
	template <typename T = Il2CppString*> T get_ProcessName() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AC858))(this);
	}
	template <typename T = uintptr_t> T get_StartInfo() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42ACA70))(this);
	}
	template <typename T = void> T set_StartInfo(uintptr_t value) {
		return ((T (*)(Process*, uintptr_t))(Il2CppBase() + 0x42ACC2C))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42ACCE8))(this);
	}
	template <typename T = bool> static T Kill_internal(uintptr_t handle, int32_t signo) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x42ACCFC))(0, handle, signo);
	}
	template <typename T = bool> T Close_1(int32_t signo) {
		return ((T (*)(Process*, int32_t))(Il2CppBase() + 0x42ACD08))(this, signo);
	}
	template <typename T = uintptr_t> static T GetProcess_internal(int32_t pid) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42ACE5C))(0, pid);
	}
	template <typename T = int32_t> static T GetPid_internal() {
		return ((T (*)(void *))(Il2CppBase() + 0x42ACE64))(0);
	}
	template <typename T = uintptr_t> static T GetCurrentProcess() {
		return ((T (*)(void *))(Il2CppBase() + 0x42ACE68))(0);
	}
	template <typename T = void> T Kill() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42ACF98))(this);
	}
	template <typename T = bool> static T ShellExecuteEx_internal(uintptr_t startInfo, uintptr_t proc_info) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42ACFA0))(0, startInfo, proc_info);
	}
	template <typename T = bool> static T CreateProcess_internal(uintptr_t startInfo, uintptr_t stdin, uintptr_t stdout, uintptr_t stderr, uintptr_t proc_info) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42ACFAC))(0, startInfo, stdin, stdout, stderr, proc_info);
	}
	template <typename T = bool> static T Start_shell(uintptr_t startInfo, uintptr_t process) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42ACFE0))(0, startInfo, process);
	}
	template <typename T = bool> static T Start_noshell(uintptr_t startInfo, uintptr_t process) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42AD40C))(0, startInfo, process);
	}
	template <typename T = void> static T FillUserInfo(uintptr_t startInfo, uintptr_t proc_info) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42AD2F4))(0, startInfo, proc_info);
	}
	template <typename T = bool> static T Start_common(uintptr_t startInfo, uintptr_t process) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42AEA70))(0, startInfo, process);
	}
	template <typename T = bool> T Start() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AEC8C))(this);
	}
	template <typename T = uintptr_t> static T Start_1(uintptr_t startInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42AED64))(0, startInfo);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AEE7C))(this);
	}
	template <typename T = bool> T WaitForExit_internal(uintptr_t handle, int32_t ms) {
		return ((T (*)(Process*, uintptr_t, int32_t))(Il2CppBase() + 0x42AEF7C))(this, handle, ms);
	}
	template <typename T = void> T WaitForExit() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AEF80))(this);
	}
	template <typename T = bool> T WaitForExit_1(int32_t milliseconds) {
		return ((T (*)(Process*, int32_t))(Il2CppBase() + 0x42AEF88))(this, milliseconds);
	}
	template <typename T = void> T Process_free_internal(uintptr_t handle) {
		return ((T (*)(Process*, uintptr_t))(Il2CppBase() + 0x42AED60))(this, handle);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(Process*, bool))(Il2CppBase() + 0x42AF3D4))(this, disposing);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Process*))(Il2CppBase() + 0x42AF640))(this);
	}
	template <typename T = bool> static T get_IsWindows() {
		return ((T (*)(void *))(Il2CppBase() + 0x42AE958))(0);
	}

};

}
