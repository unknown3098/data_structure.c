createQueue()
Q[n];
front < -- - 1;
rear < -- - 1;
end createQuene()

isQueneEmpty(Q)
if (front == rear) then return true;
else return false;
end isQueueEmpty()

isQueueFull(Q)
if (rear == n - 1) then return true;
else return false;
end isQueueFull()

deQueue(Q)
if (isQueueEmpty(Q)) then Queue_Empty();
else {
	front < --front + 1;
	return Q[front];
}
end deQueue()

peekQ(Q)
if (isQueueEmpty(Q)) then Queue_Empty();
else returnQ[front + 1];
end peekQ()