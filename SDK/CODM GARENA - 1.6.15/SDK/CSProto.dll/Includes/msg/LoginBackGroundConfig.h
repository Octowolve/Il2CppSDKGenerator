#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LoginBackGroundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LoginBackGroundConfig"));
	}

	template <typename T = uint32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _MinLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _MaxLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _Language() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _BNoviceGuide() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _BFullScreen() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& _BCdn() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SpritePath() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& _Width() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<float>*> T& _X() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<float>*> T& _Y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<float>*> T& _Z() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _Pivot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _Alignment() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& _FontSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& _FontStyle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<bool>*> T& _IsShowBlock() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _LocId_Desc() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _StartTimestamp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uint32_t> T get_Id() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3380))(this);
	}
	template <typename T = void> T set_Id(uint32_t value) {
		return ((T (*)(LoginBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA3388))(this, value);
	}
	template <typename T = uint32_t> T get_MinLevel() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3390))(this);
	}
	template <typename T = void> T set_MinLevel(uint32_t value) {
		return ((T (*)(LoginBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA3398))(this, value);
	}
	template <typename T = uint32_t> T get_MaxLevel() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA33A0))(this);
	}
	template <typename T = void> T set_MaxLevel(uint32_t value) {
		return ((T (*)(LoginBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA33A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA33B0))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoginBackGroundConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA33B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA33C0))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoginBackGroundConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA33C8))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA33D0))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(LoginBackGroundConfig*, int32_t))(Il2CppBase() + 0x4EA33D8))(this, value);
	}
	template <typename T = bool> T get_BNoviceGuide() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA33E0))(this);
	}
	template <typename T = void> T set_BNoviceGuide(bool value) {
		return ((T (*)(LoginBackGroundConfig*, bool))(Il2CppBase() + 0x4EA33E8))(this, value);
	}
	template <typename T = bool> T get_BFullScreen() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA33F0))(this);
	}
	template <typename T = void> T set_BFullScreen(bool value) {
		return ((T (*)(LoginBackGroundConfig*, bool))(Il2CppBase() + 0x4EA33F8))(this, value);
	}
	template <typename T = bool> T get_BCdn() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3400))(this);
	}
	template <typename T = void> T set_BCdn(bool value) {
		return ((T (*)(LoginBackGroundConfig*, bool))(Il2CppBase() + 0x4EA3408))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SpritePath() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3410))(this);
	}
	template <typename T = void> T set_SpritePath(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoginBackGroundConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3418))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_Width() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3420))(this);
	}
	template <typename T = Il2CppList<float>*> T get_X() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3428))(this);
	}
	template <typename T = Il2CppList<float>*> T get_Y() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3430))(this);
	}
	template <typename T = Il2CppList<float>*> T get_Z() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3438))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_Pivot() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3440))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_Alignment() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3448))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_FontSize() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3450))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_FontStyle() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3458))(this);
	}
	template <typename T = Il2CppList<bool>*> T get_IsShowBlock() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3460))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_LocId_Desc() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3468))(this);
	}
	template <typename T = uint32_t> T get_StartTimestamp() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3470))(this);
	}
	template <typename T = void> T set_StartTimestamp(uint32_t value) {
		return ((T (*)(LoginBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA3478))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(LoginBackGroundConfig*))(Il2CppBase() + 0x4EA3480))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(LoginBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA3488))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LoginBackGroundConfig*, bool))(Il2CppBase() + 0x4EA3490))(this, createIfMissing);
	}

};

}
