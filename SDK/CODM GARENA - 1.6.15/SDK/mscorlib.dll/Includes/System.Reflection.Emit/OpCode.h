#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class OpCode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "OpCode"));
	}

	template <typename T = unsigned char> T& op1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& op2() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& push() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = unsigned char> T& pop() {
		return *(T*)((uintptr_t)this + 0x3);
	}
	template <typename T = unsigned char> T& size() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = unsigned char> T& type() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = unsigned char> T& args() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = unsigned char> T& flow() {
		return *(T*)((uintptr_t)this + 0x7);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x4573F20))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(OpCode*, uintptr_t))(Il2CppBase() + 0x4573FF4))(this, obj);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x4573FFC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x4574004))(this);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x457400C))(this);
	}
	template <typename T = uintptr_t> T get_OperandType() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x4574014))(this);
	}
	template <typename T = uintptr_t> T get_StackBehaviourPop() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x457401C))(this);
	}
	template <typename T = uintptr_t> T get_StackBehaviourPush() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x4574024))(this);
	}
	template <typename T = int16_t> T get_Value() {
		return ((T (*)(OpCode*))(Il2CppBase() + 0x457402C))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x456FA74))(0, a, b);
	}

};

}
