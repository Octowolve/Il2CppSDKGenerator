#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class MarshalAsAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "MarshalAsAttribute"));
	}

	template <typename T = uintptr_t> T& utype() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ArraySubType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MarshalCookie() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MarshalType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MarshalTypeRef() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SizeConst() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int16_t> T& SizeParamIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
