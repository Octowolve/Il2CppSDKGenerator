#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class Thread
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "Thread"));
	}

	template <typename T = int32_t> T& lock_thread_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& system_thread_handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cached_culture_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& unused0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& threadpool_thread() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& name_len() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& abort_exc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& abort_state_handle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int64_t> T& thread_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& start_notify() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& stack_ptr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& static_data() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& jit_data() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& lock_data() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& current_appcontext() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& stack_size() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& start_obj() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& appdomain_refs() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& interruption_requested() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& suspend_event() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& suspended_event() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& resume_event() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& synch_cs() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& serialized_culture_info() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& serialized_culture_info_len() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& serialized_ui_culture_info() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& serialized_ui_culture_info_len() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& thread_dump_requested() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& end_stack() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& thread_interrupt_requested() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = unsigned char> T& apartment_state() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = int32_t> T& critical_region_level() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& small_id() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& manage_callback() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& pending_exception() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ec_to_set() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& interrupt_on_stop() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& unused3() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& unused4() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& unused5() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& unused6() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& local_slots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _ec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& threadstart() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& managed_id() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _principal() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& datastorehash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& datastore_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& in_currentculture() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& culture_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_CurrentContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D89958))(0);
	}
	template <typename T = uintptr_t> static T CurrentThread_internal() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D89964))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentThread() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D87B60))(0);
	}
	template <typename T = void> static T FreeLocalSlotValues(int32_t slot, bool thread_local) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x4D89968))(0, slot, thread_local);
	}
	template <typename T = uintptr_t> static T GetDomain() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D89974))(0);
	}
	template <typename T = int32_t> static T GetDomainID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D89980))(0);
	}
	template <typename T = void> static T ResetAbort_internal() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D89984))(0);
	}
	template <typename T = void> static T ResetAbort() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D89988))(0);
	}
	template <typename T = void> static T Sleep_internal(int32_t ms) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4D89A20))(0, ms);
	}
	template <typename T = void> static T Sleep(int32_t millisecondsTimeout) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4D89A28))(0, millisecondsTimeout);
	}
	template <typename T = uintptr_t> T Thread_internal(uintptr_t start) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D89B30))(this, start);
	}
	template <typename T = void> T Thread_init() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89754))(this);
	}
	template <typename T = uintptr_t> T GetCachedCurrentCulture() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89B34))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSerializedCurrentCulture() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89B38))(this);
	}
	template <typename T = void> T SetCachedCurrentCulture(uintptr_t culture) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D89B3C))(this, culture);
	}
	template <typename T = uintptr_t> T GetCachedCurrentUICulture() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89B40))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSerializedCurrentUICulture() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89B44))(this);
	}
	template <typename T = void> T SetCachedCurrentUICulture(uintptr_t culture) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D89B48))(this, culture);
	}
	template <typename T = uintptr_t> T get_CurrentCulture() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89B4C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentUICulture() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D89EB8))(this);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A1A0))(this);
	}
	template <typename T = void> T set_IsBackground(bool value) {
		return ((T (*)(Thread*, bool))(Il2CppBase() + 0x4D8A1C4))(this, value);
	}
	template <typename T = Il2CppString*> T GetName_internal() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A1E4))(this);
	}
	template <typename T = void> T SetName_internal(Il2CppString* name) {
		return ((T (*)(Thread*, Il2CppString*))(Il2CppBase() + 0x4D8A1E8))(this, name);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A1EC))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Thread*, Il2CppString*))(Il2CppBase() + 0x4D8A1F0))(this, value);
	}
	template <typename T = void> T set_Priority(uintptr_t value) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D8A1F4))(this, value);
	}
	template <typename T = void> T Abort_internal(uintptr_t stateInfo) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D8A1F8))(this, stateInfo);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A1FC))(this);
	}
	template <typename T = bool> T Join_internal(int32_t ms, uintptr_t handle) {
		return ((T (*)(Thread*, int32_t, uintptr_t))(Il2CppBase() + 0x4D8A204))(this, ms, handle);
	}
	template <typename T = void> T Join() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A208))(this);
	}
	template <typename T = bool> T Join_1(int32_t millisecondsTimeout) {
		return ((T (*)(Thread*, int32_t))(Il2CppBase() + 0x4D8A214))(this, millisecondsTimeout);
	}
	template <typename T = void> static T MemoryBarrier() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D8A2F0))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A2F4))(this);
	}
	template <typename T = void> T Thread_free_internal(uintptr_t handle) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D8A490))(this, handle);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A494))(this);
	}
	template <typename T = void> T SetState(uintptr_t set) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D8A1DC))(this, set);
	}
	template <typename T = void> T ClrState(uintptr_t clr) {
		return ((T (*)(Thread*, uintptr_t))(Il2CppBase() + 0x4D8A1E0))(this, clr);
	}
	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A1C0))(this);
	}
	template <typename T = int32_t> static T GetNewManagedId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D8A4FC))(0);
	}
	template <typename T = int32_t> static T GetNewManagedId_internal() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D8A594))(0);
	}
	template <typename T = uintptr_t> T get_ExecutionContext() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D88268))(this);
	}
	template <typename T = int32_t> T get_ManagedThreadId() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A598))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D8A654))(this);
	}
	template <typename T = uintptr_t> T GetCompressedStack() {
		return ((T (*)(Thread*))(Il2CppBase() + 0x4D87BF8))(this);
	}

};

}
