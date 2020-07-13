#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ActionBufferBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ActionBufferBase"));
	}

	template <typename T = int32_t> T& action() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeEncode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeDecode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_Action() {
		return ((T (*)(ActionBufferBase*))(Il2CppBase() + 0x2A6CBF8))(this);
	}
	template <typename T = void> T set_Action(int32_t value) {
		return ((T (*)(ActionBufferBase*, int32_t))(Il2CppBase() + 0x2A6CC00))(this, value);
	}
	template <typename T = void> T BeforeEncode(uintptr_t writer) {
		return ((T (*)(ActionBufferBase*, uintptr_t))(Il2CppBase() + 0x2A6CC08))(this, writer);
	}
	template <typename T = void> T BeforeDecode(uintptr_t reader) {
		return ((T (*)(ActionBufferBase*, uintptr_t))(Il2CppBase() + 0x2A6CCD0))(this, reader);
	}
	template <typename T = void> T xLuaBaseProxy_BeforeEncode(uintptr_t P0) {
		return ((T (*)(ActionBufferBase*, uintptr_t))(Il2CppBase() + 0x2A6CD98))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeforeDecode(uintptr_t P0) {
		return ((T (*)(ActionBufferBase*, uintptr_t))(Il2CppBase() + 0x2A6CDA0))(this, P0);
	}

};

}
