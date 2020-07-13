#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ILGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ILGenerator"));
	}

	template <typename T = uintptr_t> static T& void_type() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& code_len() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& max_stack() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& cur_stack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& locals() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& num_token_fixups() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& token_fixups() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& labels() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& num_labels() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fixups() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& num_fixups() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& module() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& token_gen() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T add_token_fixup(uintptr_t mi) {
		return ((T (*)(ILGenerator*, uintptr_t))(Il2CppBase() + 0x456E2CC))(this, mi);
	}
	template <typename T = void> T make_room(int32_t nbytes) {
		return ((T (*)(ILGenerator*, int32_t))(Il2CppBase() + 0x456E40C))(this, nbytes);
	}
	template <typename T = void> T emit_int(int32_t val) {
		return ((T (*)(ILGenerator*, int32_t))(Il2CppBase() + 0x456E510))(this, val);
	}
	template <typename T = void> T ll_emit(uintptr_t opcode) {
		return ((T (*)(ILGenerator*, uintptr_t))(Il2CppBase() + 0x456E60C))(this, opcode);
	}
	template <typename T = int32_t> static T target_len(uintptr_t opcode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x456E74C))(0, opcode);
	}
	template <typename T = uintptr_t> T DeclareLocal(uintptr_t localType) {
		return ((T (*)(ILGenerator*, uintptr_t))(Il2CppBase() + 0x456E75C))(this, localType);
	}
	template <typename T = uintptr_t> T DeclareLocal_1(uintptr_t localType, bool pinned) {
		return ((T (*)(ILGenerator*, uintptr_t, bool))(Il2CppBase() + 0x456E770))(this, localType, pinned);
	}
	template <typename T = uintptr_t> T DefineLabel() {
		return ((T (*)(ILGenerator*))(Il2CppBase() + 0x456EA50))(this);
	}
	template <typename T = void> T Emit(uintptr_t opcode) {
		return ((T (*)(ILGenerator*, uintptr_t))(Il2CppBase() + 0x456EBBC))(this, opcode);
	}
	template <typename T = void> T Emit_1(uintptr_t opcode, unsigned char arg) {
		return ((T (*)(ILGenerator*, uintptr_t, unsigned char))(Il2CppBase() + 0x456EBEC))(this, opcode, arg);
	}
	template <typename T = void> T Emit_2(uintptr_t opcode, uintptr_t con) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456EC60))(this, opcode, con);
	}
	template <typename T = void> T Emit_3(uintptr_t opcode, uintptr_t field) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456EE10))(this, opcode, field);
	}
	template <typename T = void> T Emit_4(uintptr_t opcode, int32_t arg) {
		return ((T (*)(ILGenerator*, uintptr_t, int32_t))(Il2CppBase() + 0x456EF94))(this, opcode, arg);
	}
	template <typename T = void> T Emit_5(uintptr_t opcode, uintptr_t label) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456EFD4))(this, opcode, label);
	}
	template <typename T = void> T Emit_6(uintptr_t opcode, uintptr_t local) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456F274))(this, opcode, local);
	}
	template <typename T = void> T Emit_7(uintptr_t opcode, uintptr_t meth) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456F670))(this, opcode, meth);
	}
	template <typename T = void> T Emit_8(uintptr_t opcode, uintptr_t method, int32_t token) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x456FAA0))(this, opcode, method, token);
	}
	template <typename T = void> T Emit_9(uintptr_t opcode, Il2CppString* str) {
		return ((T (*)(ILGenerator*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x456FC38))(this, opcode, str);
	}
	template <typename T = void> T Emit_10(uintptr_t opcode, uintptr_t cls) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x456FD70))(this, opcode, cls);
	}
	template <typename T = void> T EmitCall(uintptr_t opcode, uintptr_t methodInfo, Il2CppArray<uintptr_t>* optionalParameterTypes) {
		return ((T (*)(ILGenerator*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456FE9C))(this, opcode, methodInfo, optionalParameterTypes);
	}
	template <typename T = void> T MarkLabel(uintptr_t loc) {
		return ((T (*)(ILGenerator*, uintptr_t))(Il2CppBase() + 0x4570228))(this, loc);
	}
	template <typename T = void> T label_fixup() {
		return ((T (*)(ILGenerator*))(Il2CppBase() + 0x4569A8C))(this);
	}
	template <typename T = int32_t> static T Mono_GetCurrentOffset(uintptr_t ig) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4569A6C))(0, ig);
	}

};

}
