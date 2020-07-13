#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ObjRef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ObjRef"));
	}

	template <typename T = uintptr_t> T& channel_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& uri() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& typeInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& envoyInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& flags() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _serverType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& MarshalledObjectRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WellKnowObjectRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map26() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsReferenceToWellKnow() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3EF24))(this);
	}
	template <typename T = uintptr_t> T get_ChannelInfo() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3EFEC))(this);
	}
	template <typename T = uintptr_t> T get_EnvoyInfo() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3EFF4))(this);
	}
	template <typename T = void> T set_EnvoyInfo(uintptr_t value) {
		return ((T (*)(ObjRef*, uintptr_t))(Il2CppBase() + 0x4B3EFFC))(this, value);
	}
	template <typename T = uintptr_t> T get_TypeInfo() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3F004))(this);
	}
	template <typename T = void> T set_TypeInfo(uintptr_t value) {
		return ((T (*)(ObjRef*, uintptr_t))(Il2CppBase() + 0x4B3F00C))(this, value);
	}
	template <typename T = Il2CppString*> T get_URI() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3F014))(this);
	}
	template <typename T = void> T set_URI(Il2CppString* value) {
		return ((T (*)(ObjRef*, Il2CppString*))(Il2CppBase() + 0x4B3F01C))(this, value);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ObjRef*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3F024))(this, info, context);
	}
	template <typename T = uintptr_t> T GetRealObject(uintptr_t context) {
		return ((T (*)(ObjRef*, uintptr_t))(Il2CppBase() + 0x4B3F214))(this, context);
	}
	template <typename T = void> T UpdateChannelInfo() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3E5F4))(this);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(ObjRef*))(Il2CppBase() + 0x4B3F3C4))(this);
	}

};

}
