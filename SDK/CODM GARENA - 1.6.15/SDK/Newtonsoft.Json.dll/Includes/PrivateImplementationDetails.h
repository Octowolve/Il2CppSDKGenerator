#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<PrivateImplementationDetails>"));
	}

	template <typename T = uintptr_t> static T& 9E31F24F64765FCAA589F589324D17C9FCF6A06D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ADFD2E1C801C825415DD53F4F2F72A13B389313C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& DD3AEFEADB1CD615F3017763F1568179FEE640B0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32);
	}
	template <typename T = uintptr_t> static T& E92B39D8233061927D9ACDE54665E68E7535635A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x66);
	}


};

}
