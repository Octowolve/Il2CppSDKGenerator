#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmLogEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmLogEntry"));
	}

	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& textWithTimecode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Log() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LogType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SentByState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Action() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Event() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Transition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& EventTarget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& StateTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& FrameCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& FsmVariablesCopy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& GlobalVariablesCopy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& GameObjectName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& GameObjectIcon() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& Text2() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_Log() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0ED78))(this);
	}
	template <typename T = void> T set_Log(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0DF00))(this, value);
	}
	template <typename T = uintptr_t> T get_LogType() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0E51C))(this);
	}
	template <typename T = void> T set_LogType(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE4C))(this, value);
	}
	template <typename T = uintptr_t> T get_Fsm() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0E14C))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0EFD8))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE54))(this, value);
	}
	template <typename T = uintptr_t> T get_SentByState() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0EFE0))(this);
	}
	template <typename T = void> T set_SentByState(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE5C))(this, value);
	}
	template <typename T = uintptr_t> T get_Action() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0EFE8))(this);
	}
	template <typename T = void> T set_Action(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE64))(this, value);
	}
	template <typename T = uintptr_t> T get_Event() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0E010))(this);
	}
	template <typename T = void> T set_Event(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE6C))(this, value);
	}
	template <typename T = uintptr_t> T get_Transition() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0EFF0))(this);
	}
	template <typename T = void> T set_Transition(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EED0))(this, value);
	}
	template <typename T = uintptr_t> T get_EventTarget() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0EFF8))(this);
	}
	template <typename T = void> T set_EventTarget(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE74))(this, value);
	}
	template <typename T = float> T get_Time() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F000))(this);
	}
	template <typename T = void> T set_Time(float value) {
		return ((T (*)(FsmLogEntry*, float))(Il2CppBase() + 0x2F0E000))(this, value);
	}
	template <typename T = float> T get_StateTime() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F008))(this);
	}
	template <typename T = void> T set_StateTime(float value) {
		return ((T (*)(FsmLogEntry*, float))(Il2CppBase() + 0x2F0EE84))(this, value);
	}
	template <typename T = int32_t> T get_FrameCount() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F010))(this);
	}
	template <typename T = void> T set_FrameCount(int32_t value) {
		return ((T (*)(FsmLogEntry*, int32_t))(Il2CppBase() + 0x2F0E008))(this, value);
	}
	template <typename T = uintptr_t> T get_FsmVariablesCopy() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F018))(this);
	}
	template <typename T = void> T set_FsmVariablesCopy(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EE8C))(this, value);
	}
	template <typename T = uintptr_t> T get_GlobalVariablesCopy() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F020))(this);
	}
	template <typename T = void> T set_GlobalVariablesCopy(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0EEC8))(this, value);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F028))(this);
	}
	template <typename T = void> T set_GameObject(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0E170))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameObjectName() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F030))(this);
	}
	template <typename T = void> T set_GameObjectName(Il2CppString* value) {
		return ((T (*)(FsmLogEntry*, Il2CppString*))(Il2CppBase() + 0x2F0E178))(this, value);
	}
	template <typename T = uintptr_t> T get_GameObjectIcon() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F038))(this);
	}
	template <typename T = void> T set_GameObjectIcon(uintptr_t value) {
		return ((T (*)(FsmLogEntry*, uintptr_t))(Il2CppBase() + 0x2F0F040))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0E524))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(FsmLogEntry*, Il2CppString*))(Il2CppBase() + 0x2F0EED8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text2() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F048))(this);
	}
	template <typename T = void> T set_Text2(Il2CppString* value) {
		return ((T (*)(FsmLogEntry*, Il2CppString*))(Il2CppBase() + 0x2F0F050))(this, value);
	}
	template <typename T = Il2CppString*> T get_TextWithTimecode() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F058))(this);
	}
	template <typename T = int32_t> T GetIndex() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F224))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0EE14))(this);
	}
	template <typename T = void> T DebugLog() {
		return ((T (*)(FsmLogEntry*))(Il2CppBase() + 0x2F0F330))(this);
	}

};

}
