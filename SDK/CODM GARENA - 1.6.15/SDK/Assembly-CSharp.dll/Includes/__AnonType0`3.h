#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnonType03
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>__AnonType0`3"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(AnonType03*))(Il2CppBase() + 0x4710FA4))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(AnonType03*))(Il2CppBase() + 0x4710FAC))(this);
	}
	template <typename T = uintptr_t> T get_Index() {
		return ((T (*)(AnonType03*))(Il2CppBase() + 0x4710FB4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(AnonType03*, uintptr_t))(Il2CppBase() + 0x4710FBC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AnonType03*))(Il2CppBase() + 0x47111EC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AnonType03*))(Il2CppBase() + 0x4711404))(this);
	}

};

}
