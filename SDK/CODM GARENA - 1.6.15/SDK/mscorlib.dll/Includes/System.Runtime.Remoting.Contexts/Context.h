#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class Context
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "Context"));
	}

	template <typename T = int32_t> T& domain_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& context_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& static_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& default_server_context_sink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& server_context_sink_chain() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& client_context_sink_chain() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& datastore() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& context_properties() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& frozen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& global_count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& namedSlots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& global_dynamic_properties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& context_dynamic_properties() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& callback_object() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2A874))(this);
	}
	template <typename T = uintptr_t> static T get_DefaultContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B2A87C))(0);
	}
	template <typename T = int32_t> T get_ContextID() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2A888))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ContextProperties() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2A890))(this);
	}
	template <typename T = bool> T get_IsDefaultContext() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2A9B8))(this);
	}
	template <typename T = bool> T get_NeedsContextSink() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2A9CC))(this);
	}
	template <typename T = bool> static T RegisterDynamicProperty(uintptr_t prop, uintptr_t obj, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2AB54))(0, prop, obj, ctx);
	}
	template <typename T = bool> static T UnregisterDynamicProperty(Il2CppString* name, uintptr_t obj, uintptr_t ctx) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2B23C))(0, name, obj, ctx);
	}
	template <typename T = uintptr_t> static T GetDynamicPropertyCollection(uintptr_t obj, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2AC1C))(0, obj, ctx);
	}
	template <typename T = void> static T NotifyGlobalDynamicSinks(bool start, uintptr_t req_msg, bool client_site, bool async) {
		return ((T (*)(void *, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x4B2B810))(0, start, req_msg, client_site, async);
	}
	template <typename T = bool> static T get_HasGlobalDynamicSinks() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B2BFD4))(0);
	}
	template <typename T = void> T NotifyDynamicSinks(bool start, uintptr_t req_msg, bool client_site, bool async) {
		return ((T (*)(Context*, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x4B2C0EC))(this, start, req_msg, client_site, async);
	}
	template <typename T = bool> T get_HasDynamicSinks() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2C158))(this);
	}
	template <typename T = bool> T get_HasExitSinks() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2C178))(this);
	}
	template <typename T = uintptr_t> T GetProperty(Il2CppString* name) {
		return ((T (*)(Context*, Il2CppString*))(Il2CppBase() + 0x4B2C658))(this, name);
	}
	template <typename T = void> T SetProperty(uintptr_t prop) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x4B2CA14))(this, prop);
	}
	template <typename T = void> T Freeze() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2CC00))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2CF48))(this);
	}
	template <typename T = uintptr_t> T GetServerContextSinkChain() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2D038))(this);
	}
	template <typename T = uintptr_t> T GetClientContextSinkChain() {
		return ((T (*)(Context*))(Il2CppBase() + 0x4B2C28C))(this);
	}
	template <typename T = uintptr_t> T CreateServerObjectSinkChain(uintptr_t obj, bool forceInternalExecute) {
		return ((T (*)(Context*, uintptr_t, bool))(Il2CppBase() + 0x4B2D30C))(this, obj, forceInternalExecute);
	}
	template <typename T = uintptr_t> T CreateEnvoySink(uintptr_t serverObject) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x4B2D670))(this, serverObject);
	}
	template <typename T = uintptr_t> static T SwitchToContext(uintptr_t newContext) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2DA34))(0, newContext);
	}
	template <typename T = uintptr_t> static T CreateNewContext(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2DA40))(0, msg);
	}
	template <typename T = void> T DoCallBack(uintptr_t deleg) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x4B2E350))(this, deleg);
	}
	template <typename T = uintptr_t> static T AllocateDataSlot() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B2E4C8))(0);
	}
	template <typename T = uintptr_t> static T AllocateNamedDataSlot(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B2E558))(0, name);
	}
	template <typename T = void> static T FreeNamedDataSlot(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B2E71C))(0, name);
	}
	template <typename T = uintptr_t> static T GetData(uintptr_t slot) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2E8CC))(0, slot);
	}
	template <typename T = uintptr_t> static T GetNamedDataSlot(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B2EA3C))(0, name);
	}
	template <typename T = void> static T SetData(uintptr_t slot, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2EC64))(0, slot, data);
	}

};

}
