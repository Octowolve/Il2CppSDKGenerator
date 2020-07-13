#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ConnectorInitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ConnectorInitInfo"));
	}

	template <typename T = uint32_t> T& MaxBufferSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& MaxSendMessageSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& MaxRecvMessageSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EncMethod() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& KeyMakingMethod() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& DH() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& Timeout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& LoopInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& ClearBufferWhenReconnect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& InfoType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(ConnectorInitInfo*, uintptr_t))(Il2CppBase() + 0x4520570))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(ConnectorInitInfo*, uintptr_t))(Il2CppBase() + 0x45206F8))(this, reader);
	}

};

}
