#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USEventBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USEventBase"));
	}

	template <typename T = bool> T& fireOnSkip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& firetime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serializedAdditionalObjectsPaths() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T get_FireTime() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485C9EC))(this);
	}
	template <typename T = void> T set_FireTime(float value) {
		return ((T (*)(USEventBase*, float))(Il2CppBase() + 0x485C9F4))(this, value);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485CB4C))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(USEventBase*, float))(Il2CppBase() + 0x485CB54))(this, value);
	}
	template <typename T = uintptr_t> T get_Sequence() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485CA68))(this);
	}
	template <typename T = uintptr_t> T get_Timeline() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485CB5C))(this);
	}
	template <typename T = uintptr_t> T get_TimelineContainer() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485CFA4))(this);
	}
	template <typename T = uintptr_t> T get_AffectedObject() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D198))(this);
	}
	template <typename T = void> T SetSerializedAdditionalObjectsPaths(Il2CppArray<uintptr_t>* paths) {
		return ((T (*)(USEventBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x485D4A4))(this, paths);
	}
	template <typename T = void> T FixupAdditionalObjects() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D4AC))(this);
	}
	template <typename T = bool> T get_IsFireAndForgetEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6C0))(this);
	}
	template <typename T = bool> T get_FireOnSkip() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6D8))(this);
	}
	template <typename T = void> T set_FireOnSkip(bool value) {
		return ((T (*)(USEventBase*, bool))(Il2CppBase() + 0x485D6E0))(this, value);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ProcessEvent(float runningTime) {
		return ((T (*)(USEventBase*, float))(Il2CppBase() + 0x0))(this, runningTime);
	}
	template <typename T = void> T PauseEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6E8))(this);
	}
	template <typename T = void> T ResumeEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6EC))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6F0))(this);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6F4))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D6F8))(this);
	}
	template <typename T = void> T ManuallySetTime(float deltaTime) {
		return ((T (*)(USEventBase*, float))(Il2CppBase() + 0x485D6FC))(this, deltaTime);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAdditionalObjects() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D700))(this);
	}
	template <typename T = void> T SetAdditionalObjects(Il2CppArray<uintptr_t>* additionalObjects) {
		return ((T (*)(USEventBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x485D78C))(this, additionalObjects);
	}
	template <typename T = bool> T HasValidAdditionalObjects() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D790))(this);
	}
	template <typename T = void> T MakeUnique() {
		return ((T (*)(USEventBase*))(Il2CppBase() + 0x485D798))(this);
	}

};

}
